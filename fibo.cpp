#include <iostream>
using namespace std;

void generateFibonacci(int n) {
    if (n <= 0) {
        cout << "Please enter a positive number of terms." << endl;
        return;
    }

    int first = 0, second = 1;

    if (n == 1) {
        cout << "Fibonacci series: " << first << endl;
        return;
    }

    cout << "Fibonacci series: " << first << " " << second << " ";


    for (int i = 3; i <= n; i++) {
        int next = first + second; 
        cout << next << " ";      
        first = second;           
        second = next;             
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    generateFibonacci(n);

    return 0;
}
