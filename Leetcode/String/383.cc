#include <iostream>
using namespace std;
#include <string>


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count[26] = {0};
        for(int i = 0; i < magazine.size(); i++){
            count[magazine[i]-'a']++;//ascii code可以互相相減 例如: 'a'-'a'=0,'b'-'a'=1
        }
        for(int i = 0; i < ransomNote.size();i++){
            if(count[ransomNote[i]-'a'] != 0){
                count[ransomNote[i]-'a']--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};



int main(){
    Solution sol;
    string ransomNote = "aab";
    string magazine = "baa";
    bool result = sol.canConstruct(ransomNote, magazine);
    cout << result;
    return 0;
}