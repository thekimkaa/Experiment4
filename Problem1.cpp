#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int choice;
	int val1, val2, res;
	char x = 'y';
	
	cout << "MENU:" << endl;
	cout << "\t1. Add" << endl;
	cout << "\t2. Subtract" << endl;
	cout << "\t3. Multiply" << endl;
	cout << "\t4. Divide" << endl;
	cout << "\t5. Modulus" << endl;
	
	do
	{
		cout << "Enter your choice: ";
		cin >> choice;
		cout << "Enter your two numbers: ";
		cin >> val1 >> val2;
		
		switch(choice)
		{
			case 1:
				res = val1+val2;
				break;
			case 2:
				res = val1-val2;
				break;
			case 3:
				res = val1*val2;
				break;
			case 4:
				res = val1/val2;
				break;
			case 5:
				res = val1%val2;
				break;
			
			default: cout << "Invalid input!";
			break;
		}
		
		cout << "Result: " << res << endl;
		cout << "\nContinue (y/n)? ";
		cin >> x;
	} while(x == 'y' || x == 'Y');
	system ("pause");
	
	_getch();
	return 0;
}
