#include <iostream>
using namespace std;
int findFact(int n);
int main(){
    int num, fact;
    cout << "Enter Number to Find its Factorial: ";
    cin >> num;
    fact = findFact(num);
    cout <<"Factorial of " <<num<<" is: "<<fact;
    
    return 0;
}
int findFact(int n){
    int a, factorial = 1;
    
    for (a = 1; a <= n; a++){
        factorial = factorial * a;
    }
        
    return factorial;
}
