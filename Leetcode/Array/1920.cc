#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;//vector 現在是空的，要麼用push_back
        ans.resize(nums.size());//要麼就要resize vector

        for(int i = 0; i < nums.size(); ++i){

            ans[i] = nums[nums[i]];
        }

        return ans;
    }
};

int main(){
    Solution sol;
    vector<int> myNums = {0,2,1,5,3,4};
    vector<int> ans = sol.buildArray(myNums);
    for(int i = 0;i < ans.size();i++)
        cout<<ans[i]<<" ";
   
    return 0;
}