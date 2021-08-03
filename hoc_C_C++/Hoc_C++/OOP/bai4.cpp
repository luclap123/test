#include <iostream>
using namespace std;

class rectangel
{
public:
	float length;
	float width;

	void input()
	{
		cin >> length;
		cin >> width;
	}

	void area()
	{
		cout << length * width;
	}

	void perimeter()
	{
		cout << (length + width) * 2;
	}
};

int main()
{
	rectangel s;
	s.area();
	s.perimeter();
	return 0;
}