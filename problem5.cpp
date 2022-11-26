#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

bool isValid(string s) {

    unordered_map<char, char> Brackets {{'}', '{'}, {')', '('}, {']', '['}};
    vector<char> arr; 

    for (int i=0; i < s.length(); i++) {

        if (Brackets.count(s[1]) > 0) {
        
            arr.push_back(s[i]);
        
        } else {
        
            std::cout << s[i] << std::endl;
 
        }
    }
    return true;

}


int main() {

    cout << isValid("(){}");
    cout << isValid(")({}");
    cout << isValid("{}()");
    cout << isValid("([)]");

}