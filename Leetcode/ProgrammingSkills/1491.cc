#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>


class Solution {
public:
    double average(vector<int>& salary) {
        double sum = 0;
        double mini = *min_element(salary.begin(),salary.end());
        double maxi = *max_element(salary.begin(),salary.end());
        for(int i = 0; i < salary.size(); i++){
            sum += salary[i];
        }
        double result = (sum - mini - maxi) / (salary.size()-2);
        return result;

        
    }
};

int main(){
    Solution sol;
    vector<int> salary = {48000,59000,99000,13000,78000,45000,31000,17000,39000,37000,93000,77000,33000,28000,4000,54000,67000,6000,1000,11000};
    double result = sol.average(salary);
    cout << result;
    return 0;
}