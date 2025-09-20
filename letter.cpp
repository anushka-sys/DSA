#include <iostream>
using namespace std;

int main() {
    int rows = 4, cols = 5;
    for (int i = 0; i < rows; i++) {
        char ch = 'A';
        for (int j = 0; j < cols; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}
/*
A B C D E 
A B C D E 
A B C D E
A B C D E
*/