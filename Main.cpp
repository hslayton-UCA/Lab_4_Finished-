/*  */
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Variables

	string foodName; char itemCode; int itemQuantity; double unitPrice; char isMember; double subTotal;

	


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

    //calculations

    subTotal = unitPrice * itemQuantity;

    double taxed = itemQuantity * (unitPrice * 0.065);
    double discount = 0;
    double total = taxed + subTotal;

    if (isMember == 'y' || isMember == 'Y') 
        {
            discount = subTotal * 0.1;
            subTotal = subTotal - discount;
            total = subTotal + taxed;
        }
        





	//Audit

    
	cout << "\n==============================================" << endl;
    cout << setw(30) << "Inventory Audit" << endl;
    cout << "\n==============================================\n" << endl;
    cout << left << setw(15) << "Is Member: " << right<< setw(10) << isMember << endl;
    cout << left << setw(15) << "Discounted: " << setw(8) << right<< "$" << setprecision(3) << showpoint << discount << endl;
    cout << left << setw(15) << "Taxed: " << setw(8) << right<< "$" <<setprecision(3) << showpoint << taxed << endl;
    cout << left << setw(15) << "Total: " << setw(8) << right<< "$" << setprecision(3) << showpoint << total << endl;
    cout << "\n==============================================\n" << endl;
	
	cout << left << setw(15) << "Item Name " << left << setw(8) << "Code" << right << setw(8) << "Qty" << right << setw(15) << "Price" << endl;
    cout << "\n----------------------------------------------\n" << endl;

    cout << left << setw(16) << foodName << left << setw(5) << itemCode << right << setw(9) << itemQuantity << right << setw(12) << "$" << setprecision(3) << showpoint << unitPrice << endl;

    cout << "\n==============================================\n" << endl;
  
  
  
    // Notes for cashier stuff
    cout << setw(30) << "Enter Cashier Notes:" << endl;

    cout << "\n==============================================\n" << endl;

    string cashierNotes;
    getline(cin, cashierNotes);
    cin.ignore(500, '\n'); 
    cout << "\n==============================================\n" << endl;
    return 0;
}

