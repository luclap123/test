#include <iostream>

using namespace std;

class sort
{
    int n;
	int* a;
public:
	
	
	void input()
	{
		cout << "input numbers : ";a = new int[n];
		cin >> n;
		for (int i = 0; i < n;i++)
		{
			cout << "input [" << i << "]" << " :";
			cin >> a[i];
		}
	}

	void swap(int &a, int &b)
	{
		int tg;
		tg = a;
		a = b;
		b = tg;
	}

	void increase()
	{
		int tg;
		
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (a[i] > a[j])
				{
					swap(a[i], a[j]);
				}
			}
		}
	}

	void output()
	{
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << endl;
		}
	}

};

int main()
{
	sort s;
	s.input();
	
	s.output();
	s.increase();
}