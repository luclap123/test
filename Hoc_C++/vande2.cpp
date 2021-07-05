#include <iostream>
#include <cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct sinhvien
{
		char masv;
		string Hoten;
		string Thidua;
		float diemtin;
		float ngoaingu;
		float DTB;	
		
};

void Nhaptt(sinhvien a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\n Nhap thong tin cho nhan vien thu : "<<i+1;
		cout<<"\n Nhap MaNV : ";cin.ignore();
		cin.get(a[i].masv);
		cout<<"\n Nhap Ho ten : ";cin.get(cin,a[i].Hoten);
		cout<<"\n Nhap diem tin : ";cin>>a[i].diemtin;
		cout<<"\n nhap diem ngoai ngu : ";cin>>a[i].ngoaingu;
		a[i].DTB=(a[i].diemtin +a[i].ngoaingu)/2;
		if (a[i].DTB>=8)
        {
            cout<<"\ngioi";
        }
        if (a[i].DTB>=6.5)
        {
            cout<<"\nkha";
        }
        if (a[i].DTB>=5)
        {
            cout<<"\ntrung binh";
        }
        else
        cout<<"\nkhong dat";
	}
}

void in (sinhvien a[], int n)
{
	for (int i=0; i<n; i++)
	{
		cout<<"\t"<<a[i].Hoten<<"\t"<<a[i].diemtin<<"\t"<<a[i].ngoaingu<<"\t"<<a[i].DTB<<"\t";
	}
}

int timmax(sinhvien a[], int n)
{
	int max=a[0].DTB;
	for (int i=0; i<n; i++)
	{
		max =(max>a[i].DTB) ? max : a[i].DTB;
	}
	cout<<"\n sinh vien co diem cao nhat la : \n";
	for (int i=0; i<n; i++)
	{
		if (max == a[i].DTB)
		{
			cout<<"\t"<<std::a[i].Hoten;
		}
	}
}



void sapxep (sinhvien a[], int n)
{
	sinhvien tg;
	for (int i=0; i<n; i++)
	{
		for (int j=i+1; j<n; j++)
		{
			if (a[i].DTB <a[i].DTB)
			{
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
		cout<<"\n Danh sach nhan vien sap xep  theo phu cap giam dan:"<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<"\t"<<a[i].DTB<<"\t"<<a[i].Hoten;
		}
	}
	
}

//void timnguoi (sinhvien a[], int n)
//{
//	cout<<"\n nhap ten can tim";
//	getline(cin,a[i].Hoten);
//	if (a[i])
//}

int main() 
{
	sinhvien a[30];
	int n, chon;
		cout<<"\n Nhap so sinh vien n: ";cin>>n;
		while(n<1 || n>30)
		{
		cout<<"\n Nhap sai so luong, moi nhap lai n: ";cin>>n;
		}
	Nhaptt(a,n);
	in(a,n);
	sapxep(a,n);
		
	return 0;
}