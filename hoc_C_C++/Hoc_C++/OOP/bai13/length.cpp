#include <iostream>
#include "line.cpp"
#include "point.cpp"
using namespace std;
int main ()
{
	Point begin(5, 2);
	Point end(2, 7);
	Line line1(begin, end);
	cout << line1.getlength() << endl;

	Line line2(2, 3, 5, 4);
	cout << line2.getlength() << endl;
	return 0;
}