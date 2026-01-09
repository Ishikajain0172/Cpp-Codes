#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, rev = "";
    cin >> s;

    for (int i = s.length() - 1; i >= 0; i--)
        rev += s[i];

    if (s == rev && s.length() % 2 == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
// This program checks if the input string is a palindrome and has an even length.