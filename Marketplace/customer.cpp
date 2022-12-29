#include "customer.h"
#include"product.h"
#include<map>
#include<vector>
#include"cart.h"
using namespace std;

customer::customer(long long customer_id, string customer_address, string customer_email, string customer_name, int phone_number)
{
	customer_id = customer_id;
	customer_address = customer_address;
	customer_email = customer_email;
	customer_name = customer_name;
	phone_number = phone_number;
	
}

void customer::login(string customer_email)
{
	
}

void customer::browse_name(map<string, vector<product>> browse_name)
{

}

void customer::browse_category(map<string, vector<product>> browse_category)
{

}

void customer::add_product_tocart(map<int, product> pro, int id, int quantity)
{

	cout << "Enter Quantity" << endl;
	cin >> quantity;
	if (quantity<)
	{

	}
	else {}
	cart.push_back({ pro[id],quantity });
	
}

void customer::confirm_buying()
{
	cout << "Do you want to confirm? " << endl;

}
