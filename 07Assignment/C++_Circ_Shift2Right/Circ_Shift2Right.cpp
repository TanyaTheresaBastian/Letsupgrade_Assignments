//Given 3 values x,y,z, write a program to circularly shift their values to the right.

#include <iostream>
using namespace std;
void shift(int *a, int *b, int *c);

int main() {
 int x,y,z;
 cout<<"\nEnter x: ";
 cin>>x;
 cout<<"\nEnter y: ";
 cin>>y;
 cout<<"\nEnter z: ";
 cin>>z;
  cout<<"\nBefore Shift: \n x = "<<x<<"\n y = "<<y<<"\n z = "<<z<<"\n";
  shift(&x,&y,&z);
  
  return 0;
}
void shift(int *a, int *b, int *c){
  int temp;
    temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
  cout<<"\nAfter Shift: \n x = "<<*a<<"\n y = "<<*b<<"\n z = "<<*c;
}
