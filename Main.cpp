#include <iostream>
#include "ReadFunctions.h"
#include "BubbleSort.h"



using namespace std;

void main()
{
	const int	MaxElements = 20;
	int Array	[MaxElements];
	int			NumElements;

	cout << "Welcome to the number organizer" << endl;
	cout << "The Max number of numbers you can organize is 20, minimum is 1" << endl;

	do {
		cout << "Enter the ammount of numbers you want to organize: ";
		NumElements = ReadInteger();
		if (NumElements > 20 || NumElements < 1)
			cout << "Please enter a value 1-20" << endl;
	} while (NumElements > 20 || NumElements < 1);

	for (int i = 0; i < NumElements; i++)
		{
		cout << "Enter Your Numbers: ";
		Array[i] = ReadInteger();
		}
	
	BubbleSort(Array, NumElements);

	cout << "The numbers in order are: ";
	
	for (int i = 0; i < NumElements; i++)
	{
		cout << " " << Array[i];
	}
	cout << endl;

	cout << "\nYour numbers are now in order!" << endl;

}
