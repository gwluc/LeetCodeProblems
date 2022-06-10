#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int romanToInt(string s) {

    int precedenceValue=2000;
    int sum=0;

    unordered_map<char, int> umap { {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C',100}, {'D',500}, {'M', 1000} };

    for (int i=0; i < s.size(); i++) {
        int curr = s.at(i);

        if (precedenceValue < umap[curr]) {
            sum += umap[curr] - (2 * precedenceValue);
            continue;
        }
        
        sum += umap[curr];
        precedenceValue = umap[curr];
    }

    return sum;

}

int main() {

    cout << romanToInt("MCMXCIV");
    return 0;
}