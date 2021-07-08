#include "Point2.cpp"
#include "polyline.cpp"
using namespace std;
int main() 
{
	Polyline polyLine;
	polyLine.appendpoint(Point(1, 1));
	polyLine.appendpoint(Point(2, 3));
	polyLine.appendpoint(3, 0);
	polyLine.appendpoint(4, 2);
	cout << polyLine.getlength();
	return 0;
}