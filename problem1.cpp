#include <iostream>
#include <vector>

using namespace std;


/* 
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
*/

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
