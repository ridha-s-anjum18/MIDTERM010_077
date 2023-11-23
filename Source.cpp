#include<iostream>
using namespace std;
int main()
{
	int initialquantity;
	int currentstock = 0; 
	int soldquantity; 
	int restockquantity;
	int threshold;
	cout << "Enter the initial quantity of product:";
	cin >> initialquantity;
	cout << "Enter threshold for restocking:";
	cin >> threshold;
	
	initialquantity = currentstock;
	do {
		
		cout << "Enter the quantity sold:";
		cin >> soldquantity;
		if (soldquantity > currentstock) {
			cout << "Not enough stock!"<< endl;
			cout << "Remaining stock :";
			cin >> currentstock;
		}
		else {
			currentstock -= soldquantity;
			cout << "Sale successful!"<< endl;
			cout << "Remaining stock :";
			cin >> currentstock;
		}
		if (currentstock <= threshold) {
			cout << "Stock is below threshold"<< endl;
			cout << "Enter the quantity restocked:";
			cin >> restockquantity;
			currentstock += restockquantity;
			cout << "Restocking successful!" << endl;
			cout << "Updated stock : " << currentstock << endl;
		}
	}
        while (soldquantity > 0);
	
		return 0;

		}
		