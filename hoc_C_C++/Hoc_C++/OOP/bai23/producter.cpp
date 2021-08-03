#pragma once
#include <iostream>
using namespace std;
class Product 
{
    public:
    int id_product;
    string name_product;
    int dc_product;
    friend class Loads;
};