#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int *a;
int n;
void menu()
{
    cout<<"\n---------------------------"<<endl;
    cout<<"please, press your choice"<<endl;
    cout<<"1. input number "<<endl;
    cout<<"2. output number "<<endl;
    cout<<"3. bubble sort "<<endl;
    cout<<"4. selection sort "<<endl;
    cout<<"5. insertion sort "<<endl;
    cout<<"6. interchange sort "<<endl;
    cout<<"7. quick sort "<<endl;
    cout<<"8. merge sort "<<endl;
    cout<<"9. out "<<endl;
}

void input (int a[], int n)
{
    srand(time(NULL));
    for (int i=0; i<n; i++)
    {
        a[i] = rand()%100;
    }
}

void output(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<a[i]<<"\t";
    }
}

void sway (int &x, int &y)
{
    int temp = x;
    x=y;
    y=temp;
}

// sort increase
void bubble_sorted(int a[], int n)
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=n-1; j>i; j--)
        {
            if (a[j]<a[j-1])
            sway(a[j], a[j-1]);
        }
    }
}

// sort decrease
void selection_sort (int a[], int n)
{
    int max;
    for (int i=0; i<n-1; i++)
    {
        max = i;
        for (int j=i+1; j<n; j++)
        {
            if (a[j]>a[max])
            max = j;
        }
        if (max != i)
        swap (a[i], a[max]);
    }
}

// sort decrease
void insertion_sort(int a[], int n)
{
    int x;
    int pos = 0;
    for (int i=1; i<n; i++)
    {
        x = a[i];
        for (pos = i; pos>0 && a[pos-1]>x; pos--)
        {
            a[pos] = a[pos-1];
        }
        a[pos] = x;
    }
}

// sort decrease
void interchange_sort(int a[], int n)
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; i++)
        {
            if (a[i]>a[j])
            swap(a[i], a[j]);
        }
    }
}

// sort increasing
void quick_sort(int a[], int left, int right)
{
    if (left >= right) return;
    int pivot = a[(left+right)/2];
    int i = left;
    int j = right;
    do 
    {
        while (a[i]<pivot) i++;
        while (a[j]>pivot) j--;
        if (i<=j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }while (i<j);
    quick_sort(a,left,j);
    quick_sort(a,i,right);
}

void merge_sort(int a[], int left, int right)
{
    if (left >= right) return;
    int mid = (left + right)/2;
    merge_sort(a,left, mid);
    merge_sort(a,mid+1,right);
    merge(a,left, mid, right);
}

void merge(int a[], int left, int mid, int right)
{
    int m = right - left +1;
    int temp[m];
    int pos = 0;
    int i= left;
    int j= mid+1;
    while (!(i>mid && j>right))
    {
        if ((i<=mid && j<=right && a[i]<a[j]) || j>right)
            temp[pos++]=a[i++];
        else
            temp[pos++]=a[j++];
    }
    for (int i=0; i<m; i++)
    {
        a[left+i] = temp[i];
    }
}

int main ()
{ 
    int choice;
    do 
    {
        menu();
        cin>>choice;
        switch (choice)
        {
            case 1:
                cout<<"input n: ";
                cin>>n;
                if (a != NULL)
                {
                    delete a;
                    a = NULL;
                }
                a = new int[n];
                input(a,n);
                break;
            case 2:
                cout<<"elements in the array : "<<endl;
                output(a,n);
                break;
            case 3:
                bubble_sorted(a,n);
                cout<<"after bubble sort array"<<endl;
                output(a, n);
                break;
            case 4:
                selection_sort(a, n);
                cout<<"after selection sort array"<<endl;
                output(a, n);
                break;
            case 5:
                insertion_sort(a, n);
                cout<<"after insertion sort array"<<endl;
                output(a, n);
                break;
            case 6:
                interchange_sort(a, n);
                cout<<"after interchange sort array"<<endl;
                output(a, n);
                break;
            case 7:
                quick_sort(a, 0, n-1);
                cout<<"after quick sort array"<<endl;
                output(a, n);
                break;
            case 8:
                merge_sort(a, 0, n-1);
                cout<<"after merge sort array"<<endl;
                output(a, n);
                break;
            case 9:
                exit(0);
        }
    }while(choice !=0);
}