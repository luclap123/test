#include <iostream>
#include <math.h>
using namespace std;
class arrays {
public:
	static int k(int arr[], int n) {
		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum += arr[i];
		}
		return sum;
	}

	static double k(double arr[], int n) {
		double sum = 0;
		for (int i = 0; i < n; i++) {
			sum += arr[i];
		}
		return sum;
	}
};

int main ()
{
    int a1[]={2,3,5};
    double a2[]={9.5,2.4,5.2};

    cout<<arrays::k(a1,sizeof(a1) /sizeof(int))<<endl;
    cout<<arrays::k(a2,sizeof(a2) /sizeof(double))<<endl;
}