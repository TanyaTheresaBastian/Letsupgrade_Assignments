#include <iostream>
using namespace std;
int sumNotDiv(int lower,int upper);

int main()
{    
  int lower,upper,sumOf;
  cout<<"Enter Lower limit Number:";
  cin>>lower;
  cout<<"Enter Upper limit Number:";
  cin>>upper;
  sumOf =sumNotDiv(lower,upper);
  cout<<"Sum of Numbers between "<<lower<<" and "<<upper<<" which are NOT divisible by 3 and 5: "<<sumOf;
  return 0;
}

int sumNotDiv(int lower,int upper){
  int sum=0;
  for (int i = lower; i <= upper; i++)
    {
      if(i%3 !=0 && i%5 !=0){
        sum = sum + i;
       }
    }
  return sum;
}
