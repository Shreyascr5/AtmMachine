#include<iostream>
using namespace std;

void showMenu() {
	cout << "*****Menu*****" << endl;
	cout << "1. Balance" << endl;
	cout << "2. Withdraw" << endl;
	cout << "3. Deposit" << endl;
	cout << "4. Exit" << endl;
	cout << "**************" << endl;

}

int main() {
//ATM has menu, balance, withdraw, deposit 
	int option;
	double balance = 500;
	

	

	do {
		showMenu();
		cout << "Option:" << endl;
		cin >> option;
		system("cls");

		switch (option)
		{
		case 1:cout << "Balance: " << balance << " Rs" << endl; break;
		case 2:cout << "Withdraw amount: " << endl;
			double withdrawAmount;
			cin >> withdrawAmount;
			if (withdrawAmount <= balance)
				balance -= withdrawAmount;
			else
				cout << "Insufficient balance!" << endl;
			break;
		case 3:cout << "deposit" << endl;
			double depositAmount;
			cin >> depositAmount;
			balance += depositAmount; break;
		}
	} while (option != 4);


	system("pause>0");
}