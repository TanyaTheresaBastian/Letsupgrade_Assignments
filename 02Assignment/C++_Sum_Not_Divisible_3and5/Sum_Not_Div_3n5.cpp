#include <iostream>
using namespace std;

int main()
{
  int lower,upper,sum=0;
  cout<<"Enter Lower limit Number:";
  cin>>lower;
  cout<<"Enter Upper limit Number:";
  cin>>upper;
  for (int i = lower; i <= upper; i++)
    {
      if(i%3 !=0 && i%5 !=0){
        sum = sum + i;
       }
    }
   cout<<"Sum of Numbers between "<<lower<<" and "<<upper<<" which are NOT divisible by 3 and 5: "<<sum;
        
  return 0;
}

 

