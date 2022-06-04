#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    
    vector<int> answer;

    for (int i=0; i < nums.size(); i++) {
        
        for (int y=i+1; y < nums.size(); y++) {
            
            if (nums[i]+nums[y] == target) {
                answer.push_back(i);
                answer.push_back(y);
                break;
            }
        }
    }

    return answer;

}


int main() {

    vector<int> vect{ 1204, 1234, 867, 9475, 74692, 9534 };

    vector<int> ans = twoSum(vect, 10768);

    for (int x: ans) {
        cout << x << endl;
    }



}