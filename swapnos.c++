#include <iostream>
using namespace std;

int main() {
    
    int a=5,b=10;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"the value of a after swapping: "<< a << endl;
    cout<<"value of b after swapping: "<< b;

    return 0;
}
