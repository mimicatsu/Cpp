#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = -1;
        for(int i = 0; i < accounts.size(); i++){
            int sum = 0;
            for(int j = 0; j < accounts[i].size(); j++){
                sum += accounts[i][j];
         
            }
            if (ans < sum){
                 ans = sum;
            }   
        }
        return ans; 
    }
};


int main(){
    Solution sol;
    vector<vector<int>> accounts = {{1,5},{7,3},{3,5}};
    int result = sol.maximumWealth(accounts);
    cout << result;
    return 0;

}

