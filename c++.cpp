#include <iostream>
using namespace std;

int generateID()
{
	static int s_id = 1;
	return ++s_id;
}

struct Employee
{
	int ID;
	Employee()
	{
		ID = generateID();
	}
};

int main()
{
	Employee ();
	Employee ();
	Employee ();

	return 0;
}