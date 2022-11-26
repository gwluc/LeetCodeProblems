#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// Stack data structure might be better...

bool isValid(string s) {

    unordered_map<char, char> Brackets {{'}', '{'}, {')', '('}, {']', '['}};
    vector<char> arr;

    for (int i=0; i < s.length(); i++) {

        if (Brackets.count(s[i]) > 0) {

            // std::cout << s[i] << std::endl;        
            if (arr.size() > 0 && (arr.back() == Brackets[s[i]]))  {
                arr.pop_back();
            }
            else {
                return false;
            }
        
        } else {
            // std::cout << s[i] << std::endl;
            arr.push_back(s[i]);
        }
    }

    return arr.size() ? false : true;
}
