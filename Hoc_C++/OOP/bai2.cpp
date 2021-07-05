#include <iostream>
#include <conio.h>
using namespace std;

class rectangel
{
public:
	double length;
	double width;

	void getinformation()
	{
		cout << "input length : ";
		cin >> length;
		cout << "input width : ";
		cin >> width;
	}

	double area()
	{
		return (length * width);
	}

	double perimeter()
	{
		return (length + width) * 2;
	}

	void display()
	{
		cout << area ()<< endl;
		cout << perimeter ()<< endl;
	}


};

int main()
{
	rectangel s;
	s.getinformation();
	s.display();
	return 0;
}