#include<iostream>
using namespace std;
long long findFact(int);
int findNPR(int, int);
int findNCR(int, int);
int main()
{
    int nPr, nCr, n, r;
    cout<<"Enter the Value of n: ";
    cin>>n;
    cout<<"Enter the Value of r: ";
    cin>>r;
    nPr = findNPR(n, r);
    nCr = findNCR(n, r);
    cout<<"\nPermutation (nPr) "<<n<<"p"<<r<<" = "<<nPr;
    cout<<"\nCombination (nCr) "<<n<<"c"<<r<<" = "<<nCr;
    cout<<endl;
    return 0;
}
long long findFact(int num)
{
    int i=1, fact=1;
    while(i<=num)
    {
        fact = i*fact;
        i++;
    }
    return fact;
}
int findNPR(int n, int r)
{
    long long numerator, denominator;
    numerator = findFact(n);
    int sub = n-r;
    denominator = findFact(sub);
    int npr = numerator/denominator;
    return (npr);
}
int findNCR(int n, int r)
{
    int npr, ncr;
    npr = findNPR(n, r);
    ncr = npr/findFact(r);
    return ncr;
}
