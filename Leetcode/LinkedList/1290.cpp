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
    int power(int degree){
            int ans = 1;
            for(int i = 0; i < degree; i++){
                ans = 2 * ans; 
            }
            return ans;
        }
    int getDecimalValue(ListNode* head){
        ListNode *current = head;
        
        int size = 0;
        while(current){
            current = current->next;
            size ++; 
        }
        current = head;//上面已經走到nullptr，所以要重新=head
        int arr[size];
        for(int i = size-1;i>=0;i--){
            arr[i] = current->val;
            current = current->next;
        }
        int result = 0;
        for(int i = size-1;i>=0;i--){
            result = result + arr[i] * power(i);
        }
        return result;

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