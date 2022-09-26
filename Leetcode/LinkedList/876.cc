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
    ListNode* middleNode(ListNode* head) {
        ListNode *current = head;
        int size = 0;
        while(current){
            current = current->next;
            size ++;
        }
        current = head;
        for(int i = 0; i < size/2; i++){
            current = current->next;
        }
        return current;


        
    }
};

int main(){

    Solution sol;
    ListNode *n6 = new ListNode(6,nullptr);
    ListNode *n5 = new ListNode(5,n6);
    ListNode *n4 = new ListNode(4,n5);
    ListNode *n3 = new ListNode(3,n4);
    ListNode *n2 = new ListNode(2,n3);
    ListNode *head = new ListNode(1,n2);
    

    ListNode *result = sol.middleNode(head);//why 用 int
    while(result){
        cout << result->val;
        result = result->next;
    }

    return 0;
}