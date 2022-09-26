#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = nums[0];//一開始是初始化成第一個值
        for(int i = 0;i < nums.size(); i++){
            sum+=nums[i];
            maxi = max(sum,maxi);//取最大的值一直比較
            if(sum < 0){
                sum = 0;//一旦遇到不是不是正值的情況就回歸成0
            }
        }
        return maxi;
    }
};


int main(){

    Solution sol;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int result = sol.maxSubArray(nums);
    cout << result;

    return 0;
}