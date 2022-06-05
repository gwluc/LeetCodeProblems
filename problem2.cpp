#include <iostream>
#include <string>
using namespace std;  

/*
Given an integer x, return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward.
For example, 121 is a palindrome while 123 is not.
*/

bool isPalindrome(int x) {

    string numToString = to_string(x);
    string reverseNumber;

    for (int i=numToString.size()-1; i >= 0; i--) {
        reverseNumber += numToString.at(i);
    }

    if (reverseNumber == numToString) {
        return true;
    }

    return false;
}

int main() {
    cout << isPalindrome(121) << endl;
    cout << isPalindrome(-121) << endl;
    cout << isPalindrome(2283822) << endl;
}