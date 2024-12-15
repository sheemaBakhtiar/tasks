#include <iostream>
#include <climits>  // For INT_MIN

using namespace std;

int maxSubArraySum(int arr[], int n) {
    int max_sum = INT_MIN; 
    int current_sum = 0;    
    
    for (int i = 0; i < n; i++) {
        current_sum += arr[i];  
        

        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
        

        if (current_sum < 0) {
            current_sum = 0;
        }
    }
    
    return max_sum;
}

int main() {
    int n;
    

    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    

    int result = maxSubArraySum(arr, n);
    
    cout << "The maximum sum of the subarray is: " << result << endl;
    
    return 0;
}
