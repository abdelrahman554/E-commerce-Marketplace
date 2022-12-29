#pragma once
#include <iostream>
#include<string>
#include<map>
#include<vector>
#include"product.h"
#include"cart.h"
using namespace std;
class customer
{
private:
	long long customer_id;
	string customer_name, customer_address, customer_email;
	int phone_number;
	list<pair<product, int>> cart;

public:
	customer(long long customer_id,string customer_address,string customer_email,string customer_name,int phone_number);
	void login(string customer_email);
	void browse_name(map<string,vector<product>> browse_name);
	void browse_category(map<string, vector<product>> browse_category);
	void add_product_tocart(map<int,product> pro,int id,int quantity);
	void confirm_buying();

};

