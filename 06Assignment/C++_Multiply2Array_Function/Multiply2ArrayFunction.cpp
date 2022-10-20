#include<iostream>
using namespace std;
void multiplyArr(int arr1[],int arr2[], int size);
int main()
{
	int size, i, arr1[100], arr2[100];
	
	cout << "\nEnter the Array Size: \n";
	cin >> size;
	
	cout << "\nEnter the First Array Items:\n";
	for(i = 0; i < size; i++)
	{
		cin >> arr1[i];
	}	
	cout << "\nEnter the Second Array Items: \n";
	for(i = 0; i < size; i++)
	{
		cin >> arr2[i];
	}
	cout << "\nProduct of the Two Arrays: \n";
	multiplyArr(arr1,arr2,size);
 	return 0;
}

void multiplyArr(int arr1[],int arr2[], int size){
  int multiplication[100];
  for(int i = 0; i < size; i++)
	{
		multiplication[i] = arr1[i] * arr2[i];
		cout << multiplication[i] << " ";
	}

}
