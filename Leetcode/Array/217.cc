#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        for(int j = 1; j < nums.size(); j++){
            if(nums[j-1]==nums[j]){
                return true; 
            }
        }
        return false;
    }
};

//1231
//1123
//O(nlgn) + O(n) 


int main(){
    Solution sol;
    vector<int> nums = {1,2,3,1};
    int result = sol.containsDuplicate(nums);
    cout << result;
    return 0;
}