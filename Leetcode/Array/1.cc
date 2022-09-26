#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[j] == target - nums[i]){
                    return ans = {i, j};
                }
            }
        }

        return ans;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> result = sol.twoSum( nums, target);
    for(int i = 0; i < result.size(); i++){
        cout << result[i];
    }
}