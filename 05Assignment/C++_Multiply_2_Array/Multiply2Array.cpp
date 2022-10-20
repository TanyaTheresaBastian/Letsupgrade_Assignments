#include<iostream>
using namespace std;

int main()
{
	int size, i, arr1[100], arr2[100], multiplication[100];
	
	cout << "\nEnter the Array Size: ";
	cin >> size;
	
	cout << "\nEnter the First Array Items: \n";
	for(i = 0; i < size; i++)
	{
		cin >> arr1[i];
	}	
	cout << "\nEnter the Second Array Items: \n";
	for(i = 0; i < size; i++)
	{
		cin >> arr2[i];
	}
	for(i = 0; i < size; i++)
	{
		multiplication[i] = arr1[i] * arr2[i];
		cout <<"\n"<< arr1[i] << " * " << arr2[i] << " = " << multiplication[i] << "\n";
	}
	cout << "\nThe Final Result of Multiplying two Arrays:\n";
	for(i = 0; i < size; i++)
	{
		cout << multiplication[i] << " ";
	}

 	return 0;
}
