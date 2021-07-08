#include "customer2.cpp"
#include <iostream>
using namespace std;
class Invoice 
{
    private:
    int id;
    Customer customer;
    double amount;
    public:
   Invoice(int id, Customer customer, double amount) 
   {
		this->id = id;
		this->customer = customer;
		this->amount = amount;
	}
    int getid()
    {
        return id;
    }
    void setcustomer (Customer customer)
    {
        this->customer = customer;
    }
    Customer getcustomer()
    {
        return customer;
    }
    void setamount (double amount)
    {
        this->amount = amount;
    }
    double getamount()
    {
        return amount;
    }
    string getcustomername()
    {
        return customer.getname();
    }
    double getamountafterdisscount()
    {
        return amount-amount *customer.getdisscount()/100;
    }
};