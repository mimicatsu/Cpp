using namespace std;
#include <iostream>

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummyHead = new ListNode(0);//作為頭但是不要用，從dummyHead->next開始用
        ListNode *current = dummyHead;
        int carry = 0;
        while(l1 != nullptr || l2 != nullptr || carry != 0){
            int x = l1 ? l1->val : 0;
            int y = l2 ? l2->val : 0;
            int sum = carry + x + y;
            carry = sum / 10 ;//下一次的carry 
            current->next = new ListNode(sum % 10);
            current = current->next; //讓list動起來
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
        return dummyHead->next;
    }
    
};


int main(){

 
    //list1
    ListNode *n13 = new ListNode(3,nullptr);
    ListNode *n12 = new ListNode(4,n13);
    ListNode *n11 = new ListNode(2,n12);
    //list2
    ListNode *n23 = new ListNode(4,nullptr);
    ListNode *n22 = new ListNode(6,n23);
    ListNode *n21 = new ListNode(5,n22);

    //solver
    Solution sol;
    ListNode* result = sol.addTwoNumbers(n11, n21);
    ListNode* ptr = result;
    while(ptr){
        cout<<ptr->val<<" ";
        ptr = ptr->next;
    }

    return 0;
}