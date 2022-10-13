#include <iostream>
using namespace std;
int findGCD(int num1, int num2);
int findLCM(int num1, int num2);
int main()
{
    int num1, num2,result;
     
    cout<<"Enter the First number: ";
    cin >> num1;
    cout<<"Enter the Second number: ";
    cin >> num2;
      
    result = findGCD(num1,num2);
    cout << " \n\nThe GCD of " << num1 << " and " << num2 << " is : " << result;
  
    result = findLCM(num1,num2);
    cout << " \nThe LCM of " << num1 << " and " << num2 << " is : " << result;
  
  return 0;
}
int findGCD(int num1, int num2){
  int prd = num1*num2;
  int gcd=1;
   for ( int i = 1; i <= prd; i++)
    {
        
        if ((num1 % i == 0) && (num2 % i == 0))
        {
           gcd = i;          
        }
    }
  return gcd;
}
int findLCM(int num1, int num2)
{
  int prd = num1*num2;
  int lcm = prd/findGCD(num1,num2);
  return lcm;
}
