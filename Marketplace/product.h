#pragma once
#include <iostream>
#include<string>
using namespace std;

class product
{
public:
	product();
	product(long long p_id, string product_name, double product_price, string product_category, double product_quantity, long long s_id_p);
	long long  product_id();
	string name();
	double price();
	string category();
	double quantity();
	long long  seller_id_p();

private:
	long long Product_id;
	string Name;
	double Price;
	string Category;
	double Quantity;
	long long Seller_id_p;




};

