#include <iostream>
using namespace std;

class Solution {
public:
    int countOdds(int low, int high) {
        if(low%2 ==0 && high %2 ==0){
            return (high-low)/2;
        }  
        else{
            return ((high-low)/2)+1 ;
        }     
    }
    
};

int main(){
    Solution sol;
    int low = 2;
    int high = 10;
    int result = sol.countOdds(low, high);
    cout << result;

    return 0;
}