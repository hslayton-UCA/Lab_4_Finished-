/*  */
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Variables

	string foodName; char itemCode; int itemQuantity; double unitPrice; char isMember;

	


	// Inputs

	cout << "Enter the food name: "; 
	getline(cin, foodName);

	cout << "Enter the item code (A-Z): "; 
	cin >> itemCode;

	cout << "Enter the how many items have you bought: "; 
	cin >> itemQuantity;

	cout << "Enter the unit price: "; 
	cin >> unitPrice;

	cout << boolalpha << "Are you a member? (y/n): "; 
	cin >> isMember;

	//Receipt

	cout <<right << "\n" <<setw(20) << "RECIPT" << endl;
	
	cout << left << setw(30) << "\nItem Name: " << right << foodName << endl;
	cout << left << setw(31) << "\nItem Code: " << right << itemCode << endl;
	cout << left << setw(31) << "\nItem Quantity: " << right << itemQuantity << endl;
	cout << left << setw(30) << "\nUnit Price: " << right << "$" <<unitPrice << endl;
	cout << left << setw(31) << "\nIs Member:  " << right << isMember << endl;

	return 0;
}

