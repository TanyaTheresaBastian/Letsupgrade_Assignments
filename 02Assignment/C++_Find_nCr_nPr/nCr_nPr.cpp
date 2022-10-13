#include<iostream>
using namespace std;
int main()
{
    long long fact, numerator, denominator;
    int nPr, nCr, n, r, i, sub;
    cout<<"Enter the Value of n: ";
    cin>>n;
    cout<<"Enter the Value of r: ";
    cin>>r;
    for(i=1, fact=1; i<=n; i++)
        fact = i*fact;
    numerator=fact;                   // fact = n!
    sub = n-r;
    for(i=1, fact=1; i<=sub; i++)
        fact = i*fact;
    denominator = fact;               // fact = (n-r)!
    nPr = numerator/denominator;
    for(i=1, fact=1; i<=r; i++)
        fact = i*fact;
    nCr = nPr/fact;                   // fact = r!
    cout<<"\nPermutation (nPr) "<<n<<"p"<<r<<" = "<< nPr;
    cout<<"\nCombination (nCr) "<<n<<"c"<<r<<" = "<<nCr;
  
    return 0;
}
