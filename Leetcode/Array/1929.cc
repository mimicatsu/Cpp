#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;

        for(int i = 0; i < nums.size(); ++i){
            ans.push_back(nums[i]);
        }
        for(int i = 0; i < nums.size(); ++i){
            ans.push_back(nums[i]);
        }

        return ans;
    }
};


int main(){
    Solution sol;
    vector<int> nums = {1,2,1} ;
    vector<int> ans = sol.getConcatenation(nums);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i];
    }


    return 0;
}