#pragma once
#include <iostream>
#include"product.h"
#include<string>

using namespace std;
class Seller
{
private:
	long long seller_iD;
	string name;
	string email;
	//list<product> s_product;
	

public:
	Seller(long long seller_iD, string name , string email);
	bool login(string email);
	product add_product();
	

};

