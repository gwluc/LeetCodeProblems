#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {

    string firstWord {strs.front()};
    string prefix;

    for (int i=0 ; i<firstWord.size() ; i++) {

        prefix.push_back(firstWord[i]);

        for (int y=1 ; y<strs.size() ; y++) {

            string wrd2 = strs[y];

            if (firstWord[i] != wrd2[i]) {
                prefix.pop_back();
                break;
            }
        }

        if (prefix.size() != i+1) {
            break;
        }
    }
    
    return prefix;

}

int main() {

    vector<string> input {"cir","car"};
    cout << longestCommonPrefix(input);

}
