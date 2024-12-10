#include <iostream> 
using namespace std; 
  
// Driver Code 
int main() 
{ 
   int num;
   cout<<"give a number: ";
   cin>> num;
   int sum=0;

   while(num!=0){
    int digit = num %10;
    sum+= digit;
    num /=10;
   }

   cout << sum;

  
    return 0; 
}