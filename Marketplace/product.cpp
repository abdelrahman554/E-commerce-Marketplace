#include "product.h"
#include<iostream>
#include <string >
using namespace std;

product::product()
{

}

product::product(long long p_id, string product_name, double product_price, string product_category, double product_quantity, long long s_id_p)
{
	 Product_id  = p_id  ;
	  Name = product_name;
	  Price = product_price;
	  Category = product_category;
	 Quantity = product_quantity;
	  Seller_id_p = s_id_p;
	  
}

long long product::product_id()
{
	return Product_id;
}

string product::name()
{
	return Name;
}

double product::price()
{
	return Price;
}

string product::category()
{
	return Category;
}

double product::quantity()
{
	return Quantity;
}

long long product::seller_id_p()
{
	return Seller_id_p;
}




