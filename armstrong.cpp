#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int num){
     int originalNum = num;
     int sum = 0;
     int digits = 0;

     while(originalNum!=0){
        digits++;
        originalNum/=10;
     }

     originalNum = num;

     while(originalNum!=0){
        int digit = originalNum % 10;  
        sum += pow(digit, digits);     
        originalNum /= 10;    

     }

     return sum==num;
}

int main(){
   cout << "Armstrong numbers between 1 and 1000 are:" << endl;

    
    for (int i = 1; i <= 1000; i++) {
        if (isArmstrong(i)) {  
            cout << i << " ";  
        }
    }

    cout << endl;
    return 0;
}