#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}


void rotate(int arr[], int n, int k) {

    k = k % n;
    

    reverse(arr, 0, n - 1);
    
    reverse(arr, 0, k - 1);

    reverse(arr, k, n - 1);
}

int main() {
    int n, k;
    

    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    

    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the number of positions to rotate: ";
    cin >> k;
    

    rotate(arr, n, k);
    
    cout << "Array after rotating by " << k << " positions: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
