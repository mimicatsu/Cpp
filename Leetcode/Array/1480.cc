#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums){
        vector<int> ans;
        ans.resize(nums.size());
        ans[0] = nums[0];
        for(int i = 1; i < nums.size(); i++){
            ans[i] =ans[i-1] + nums[i];
        }
        return ans;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {1,2,3,4,5};
    vector<int> result = sol.runningSum(nums);
    for (int i = 0; i < result.size(); i++){
        cout << result[i];
    }

    return 0;
}