#include<iostream>
#include<math.h>
using namespace std;
class PS
{
	public:
		int tu;
		int mau;
		PS()
		{
			this->tu=0;
			this->mau=1;
		}
		PS(int a,int b)
		{
			if(b!=0) 
			{
				tu=a;
				mau=b;
			}
			else
			cout<<"tham so vao ko dung";
		}
		void nhap()
		{ 
		    int kt=1;
		    while (kt)
		    {
			cout<<"\nnhap tu so: ";
			cin>>tu;
			cout<<"\nnhap mau so: ";
			cin>>mau;
			if(mau!=0) kt=0;
		    }
		}
		int UCLN(int a,int b)
		{
            if(a==0 || b==0)
            return 1;
			a=abs(a);
			b=abs(b);
			if(a==b) return a;
			while(a!=b)
			{
				if(a>b) a=a-b;
				else b=b-a;	
			}
			return a;
		}
		void RG()
		{
			int n=UCLN(tu,mau);
			tu=tu/n;
			mau=mau/n;
		}
		void hienthi()
		{
			if(mau<0) 
			{tu=-tu;
			 mau=-mau;
			}
			if(tu==0||mau==0) cout<<"0";
			else if(mau==1||mau==0) cout<<tu;
			else
			cout<<tu<<"/"<<mau;
		}
	friend	PS operator +(PS &a,PS &b)
		{	
		  PS z;
		  if(a.tu==0){
		   z=b;
		   return z;
	     }
	      if(b.tu==0)
	      {
	      	z=a;
	      	return z;
		  }
		  
		  z.tu=a.tu*b.mau+a.mau*b.tu;
		  z.mau=b.mau*a.mau;
		  return z;
		}
	friend	PS operator -(PS &a,PS &b)
		{	
		  PS z;
		  if(a.tu==0){
		   z=b;
		   z.tu=-z.tu;
		   return z;
	     }
	      if(b.tu==0)
	      {
	      	z=a;
	      	return z;
		  }
		  z.tu=a.tu*b.mau-a.mau*b.tu;
		  z.mau=b.mau*a.mau;
		  return z;
		}
		friend	PS operator *(PS &a,PS &b)
		{	
		  PS z;
		  if(a.tu==0||b.tu==0)
		   {
		   z.tu=0;
		   z.mau=1;
		   return z;
	       }
	      
		  z.tu=a.tu*b.tu;
		  z.mau=b.mau*a.mau;
		  return z;
		}
		friend	PS operator /(PS &a,PS &b)
		{	
		  PS z;
		  if(a.tu==0||b.tu==0)
		   {
		   z.tu=0;
		   z.mau=1;
		   return z;
	       }
	      
		  z.tu=a.tu*b.mau;
		  z.mau=a.mau*b.tu;
		  return z;
		}
	friend	bool operator ==(PS &a,PS &b)
		{
			if(a.tu*b.mau==a.mau*b.tu)
			return true;
			return false;
		}
	friend	bool operator >(PS &a, PS &b)
		{
		   int x=(a-b).tu;
		   int y=(a-b).mau;
		   if((x<0&&y<0)||(x>0&&y>0))
		   return true;
		   return false;
		}
		
		
};
int main()
{
	PS *ob;
	int n;
	cout<<"nhap so ps: ";
	cin>>n;
	ob= new PS[n];
	for(int i=0;i<n;i++)
	{
		ob[i].nhap();
	}
	cout<<"\n cac phan so vua nhap la:";
	for(int i=0;i<n;i++)
	{
		ob[i].RG();
		ob[i].hienthi();
		cout<<" ; ";
	}
	cout<<"\ntong phan so vua nhap la: ";
	PS s=ob[0];
	for(int i=1;i<n;i++)
	{
	  	s=s+ob[i];
	}
	s.RG();
	s.hienthi();
	cout<<"\nphan so co gt lon nhat la: ";
	PS maxps=ob[0];
	for(int i=1;i<n;i++)
	 if(ob[i]>maxps) maxps=ob[i];
	maxps.RG();
	maxps.hienthi();
	cout<<"\nnhap phan so de kiem tra: ";
	PS a;
	a.nhap();
	int kt=1;
	for(int i=0;i<n;i++)
	{
		if(ob[i]==a) kt=0;
	}
	if(kt==0) cout<<"\nphan so da dc nhap";
	else cout<<"\nphan so chua duoc nhap";
	return 1;
}
