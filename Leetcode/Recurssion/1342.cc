#include <iostream>
using namespace std;

class Solution {
public:
    int step = 0;
    int numberOfSteps(int num) {
        if(num == 0){
            return step;
        }
        else if(num % 2 != 0){
            step++;
            return numberOfSteps(num - 1);
        }
        else{
            step++;
            return numberOfSteps(num / 2);
        }
    }
};

int main(){

    Solution sol;
    int num = 14;
    int result = sol.numberOfSteps(num);
    cout << result ;
    return 0;
}