#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int arraySize;
	int temp;
	
	cout << "Selection Sorting..." << endl;
	cout << "Enter the array size: ";
	cin >> arraySize;
	cout << "Enter the " << arraySize << " elements:\n\n";

	int num[arraySize];
	
	for (int x=0; x<arraySize; x++)
	{
		cin >> num[x];
	}
	
	cout << "\nYour data: ";
	for (int x=0; x<arraySize; x++)
	cout << num[x] << " ";
	
	for (int x=0; x<arraySize; x++)
	{
		for (int y=x+1; y<arraySize; y++)
		{
			if (num[x] > num[y])
			{
				temp = num[x];
				num[x] = num[y];
				num[y] = temp;
			}
		}
	}
	
	cout << "\n\nAfter using selection or bubble sort...";
	cout << "\n\nSorted Data: ";
	
	for (int x=0; x<arraySize; x++)
	{
		cout << num[x] << " ";
	}
	
	_getch();
	return 0;
}
