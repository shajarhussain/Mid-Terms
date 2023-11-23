#include<iostream>
using namespace std;
int main()
{
int initial_stock;
cout << "Enter the initial qunatity of product in stock";
cin >> initial_stock;
int threshold = 10;
int current_stock = initial_stock;

while (true)
{
	cout<< "Current stock" << current_stock << endl;
	char choice;
	cout<< "Enter S for sale R for restocking and E for exit" << endl;
	cin >> choice;
	if (choice == 'S' || choice == 's')
	{
		int sold_quantity;
		cout << "Enter the quantity sold";
		cin >> sold_quantity;
		if (sold_quantity > current_stock)
		{
			cout << "Not enough stock avaliable for sale" << endl;
		}
		else
		{
			current_stock = current_stock - sold_quantity;
			cout << sold_quantity << "units sold & Remaining stocks" << current_stock;
		}
	}
	 else if (choice =='R' || choice == 'r')
	  {
		int restored_quantity;
		cout << "Enter the restored quantity";
		cin >> restored_quantity;
		current_stock = current_stock + restored_quantity;
		cout << restored_quantity << "restored stocks & current stock" << current_stock;
	  }
	else if (choice == 'E' || choice == 'e')
	{
		break;
	}
	if (current_stock > threshold)
	{
		cout << "warning stock is below threshold " << threshold << "Restock it" << endl;
	}    
}
return  0;
}


