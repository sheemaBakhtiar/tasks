#include <iostream>
using namespace std;

int main() {
 
     int num;
    cout << "enter an integer: ";
    cin>>num;
    int even = 0;
    int odd = 0;
    
    while(num>0){
        int rem = num%10;
        if(rem%2==0){
            even = even +1;
        }
        else{
            odd = odd+1;
        }
        num = num/10;
    }
    
    cout<<"number of even numbers: "<< even << endl;
    cout<<"number of odd number: "<< odd;

    return 0;
}
