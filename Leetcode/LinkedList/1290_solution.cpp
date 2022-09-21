#include <iostream>
using namespace std;

 
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans = 0;
        while(head){
            ans = ans * 2 + head->val;
            head = head->next;
        }
        return ans;
    }
};

int main(){
    //list
    ListNode *n13 = new ListNode(1,nullptr);
    ListNode *n12 = new ListNode(0,n13);
    ListNode *n11 = new ListNode(1,n12);
    //solver
    Solution sol;
    int result = sol.getDecimalValue(n11);
    //result
    cout << result;
    return 0;
}