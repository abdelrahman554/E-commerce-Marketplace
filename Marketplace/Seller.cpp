#include "Seller.h"

Seller::Seller(long long seller_iD, string name, string email)
{
	seller_iD = seller_iD;
	name = name;
	email = email;
	

}

bool Seller::login(string email)
{
	if (email == email)
	{
		return true;
	}
	else
	{
		cout << "invalid admin login" << endl;
		return false;
	}
}

product Seller::add_product()
{
	long long Product_id;
	string Name;
	double Price;
	string Category;
	double Quantity;
	cout << "Product_ID of Product " << endl;
	cin >> Product_id;
	cout << "Name of Product " << endl;
	cin >> Name;
	cout << "Price of Product " << endl;
	cin >> Price;
	cout << "Category of Product " << endl;
	cin >> Category;
	cout << "Quantity of Product " << endl;
	cin >> Quantity;
	product p(Product_id, Name, Price, Category, Quantity, seller_iD);
	return p;
	
}


