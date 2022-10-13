#include <iostream>
using namespace std;

int main()
{
    int num1, num2, i;
    int gcd = 1, lcm = 1;  

    cout<<"Enter the First number: ";
    cin >> num1;
    cout<<"Enter the Second number: ";
    cin >> num2;
    int prd = num1*num2;
    
    for ( i = 1; i <= prd; i++)
    {
        
        if ((num1 % i == 0) && (num2 % i == 0))
        {
            gcd = i;          
        }
    }

    lcm = prd / gcd;

    cout << " \n\nThe GCD of " << num1 << " and " << num2 << " is : " << gcd;
    cout << " \nThe LCM of " << num1 << " and " << num2 << " is : " << lcm;
    

    return 0;
}
