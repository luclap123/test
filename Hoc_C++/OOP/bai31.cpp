#include <iostream>
using namespace std;
class Account
{
    private:
    int id;
    string name;
    int balance;
    public:
    Account (int id, string name)
    {
        this->id = id;
        this->name = name;
    }
    Account (int id, string name, int balance)
    {
        this->id = id;
        this->name = name;
        this->balance = balance;
    }
    int getid()
    {
        return id;
    }
    string getname()
    {
       return name;
    }
    void setname (string name)
    {
        this->name = name;
    }
    int getbalance()
    {
        return balance;
    }
   void deposit(int amount) {
		balance += amount;
	}
    void withdraw(int amount) {
		if (balance >= amount) 
        {
			balance -= amount;
		} else 
        {
			cout << "That amount exceeds your current balance." << endl;
		}
	}
    void display()
    {
        cout<<"id :" <<id<<endl;
        cout<<"name :" <<name<<endl;
        cout<<"balance :" <<balance<<endl;
    }

};