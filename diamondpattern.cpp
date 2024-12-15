#include <iostream>
using namespace std;

void printDiamond(int rows) {
    if (rows <= 0) {
        cout << "Please enter a positive number of rows." << endl;
        return;
    }

    // Upper part of the diamond
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the diamond
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int rows;
    cout << "Enter the number of rows for the diamond pattern: ";
    cin >> rows;

    printDiamond(rows);

    return 0;
}
