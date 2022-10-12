#include <iostream>
using namespace std;
bool checkArmstrongNumber(int num);

int main(){
   int num;
   bool flag;
   cout<<"Enter number to be checked: ";
   cin>>num;

   flag = checkArmstrongNumber(num);
   if(flag == true)
      cout<<num<<" is an Armstrong number.";
   else
      cout<<num<<" is not an Armstrong number.";

   return 0;
}

bool checkArmstrongNumber(int num) {
   int temp, sum=0, rem;
   bool isArm;

   temp = num;
   while(temp != 0) {
      rem = temp % 10;
      sum = sum +(rem * rem * rem);
      temp = temp/10;
   }
   if (sum==num)
      isArm = true;
   else
      isArm = false;

   return isArm;
  }
