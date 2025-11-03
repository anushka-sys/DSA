#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str; // if you want to allow spaces, use getline(cin, str)

    string original = str;
    reverse(str.begin(), str.end());

    if (original == str)
        cout << original << " is a palindrome string." << endl;
    else
        cout << original << " is not a palindrome string." << endl;

    return 0;
}
