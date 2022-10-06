#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    cout<<"Enter First number:"; 
    cin>>num1;
    cout<<"Enter Second number:"; 
    cin>>num2;
    if(num1>num2)
    {
	cout<<"First number "<<num1<<" is the Greatest of the two.";
    }
    else
    {
	cout<<"Second number "<<num2<<" is the Greatest of the two";
    }
    return 0;
  }
