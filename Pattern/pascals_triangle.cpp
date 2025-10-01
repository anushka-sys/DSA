#include <iostream>
using namespace std;

// Function to calculate nCr (binomial coefficient)
int nCr(int n, int r) {
    int res = 1;
    if (r > n - r) 
        r = n - r; // because C(n, r) = C(n, n-r)
    
    for (int i = 0; i < r; i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        // Print leading spaces for triangle shape
        for (int j = 0; j < rows - i - 1; j++) {
            cout << "  ";
        }
        
        // Print numbers
        for (int j = 0; j <= i; j++) {
            cout << nCr(i, j) << "   ";
        }
        cout << endl;
    }

    return 0;
}
