#include <iostream>
using namespace std;
   
int main(){
    int input[100], count, i, min;
       
    cout << "Enter Number of Elements in Array: ";
    cin >> count;
     
    cout << "\nEnter " << count << " numbers: \n";
      
    for(i = 0; i < count; i++){
        cin >> input[i];
    }
     
    min = input[0];
    
    for(i = 0; i < count; i++){
        if(input[i] < min){
            min = input[i];
        }
    }
 
    cout  << "Minimum Element= " << min;
 
    return 0;
}
