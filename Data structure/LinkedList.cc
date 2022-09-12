#include <iostream>
using namespace std;

struct ListNode{
    int data;
    ListNode *next; //each listnode need save next node's address
    ListNode();//declration
    ListNode(int a);
};
ListNode::ListNode(){//we need add :: 
    this->data = 0;
    this->next = nullptr;
}
ListNode::ListNode(int a){
    this->data = a;
    this->next = nullptr;
}

struct LinkedList{
    ListNode *first;//the first Node
    LinkedList();// declration
    void PrintList();
    void Push_front(int x);// new data->n1->n2...null
    void Push_back(int x);// n1->n2...new data->null
    void Delete(int x);// delet int x in list
    void Clear();//clear the all list
    void Reverse();//7->3->1 => 1->3->7
};
LinkedList::LinkedList(){
    this->first = nullptr;
}
void LinkedList::PrintList(){
    if(first == 0){
        cout << "List is empty.\n";
        return;
    }
    ListNode *current = first; // iniriallize the "current" to first
    while(current != nullptr){
        cout << current->data << "\n";
        current = current->next;
    }

}
void LinkedList::Push_front(int x){
    ListNode *newNode = new ListNode(x);
    newNode->next = first;
    first = newNode ;// newNode become the "first"
}
void LinkedList::Push_back(int x){
    ListNode *newNode = new ListNode(x);

    if(first == 0){
        first = newNode;
        return;
    }

    ListNode *current = first;
    while(current->next != nullptr){
        current =current->next;
    }
    current->next = newNode;
}
void LinkedList::Delete(int x){
    ListNode *current = first;
    ListNode *previous = 0;
    while(current !=0 && current->data !=x){
        previous = current;//when we don't find x , we traversal the list
        current = current->next;
    }

    if(current == 0){
        cout<< "There is no " << x << " in list.\n";
        return;
    }
    else if(current == first){
        first = current->next;
        delete current;
        current = nullptr;//when we delete current we need clear it to nullptr
        return;
    }
    else{
        previous->next = current->next;
        delete current;
        current = nullptr;
        return;
    }
}

void LinkedList::Clear(){
    while(first != nullptr){
        ListNode *current = first;
        first = first->next;
        delete current;
        current = nullptr;
    }
}

void LinkedList::Reverse(){
    if (first == nullptr || first->next == nullptr){
        return;//list has nothing or only one thing
    }
    ListNode *previous = nullptr;
    ListNode *current = first;
    ListNode *preceding = first->next;

    while(preceding != nullptr){
        current->next = previous;
        previous = current;
        current = preceding;
        preceding = preceding->next;
    }
    current->next = previous;
    first = current;
}

int main(){
    LinkedList List;
    List.Push_front(3);
    List.Push_front(6);
    List.Push_front(7);
    List.Push_back(5);
    List.PrintList();
    List.Delete(5);
    List.PrintList();
    List.Reverse();
    List.Clear();
    List.PrintList();
;    return 0;
}


