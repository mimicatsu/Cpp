#include <iostream>
using namespace std;

struct listNode{
    int data;
    listNode *next;
    listNode(int x = 0, listNode *n = nullptr);
};
listNode::listNode(int x , listNode *n)
    :data{x},next{nullptr}
    {}

struct linkedList{
    listNode *first;
    linkedList();
    void printList();
    void push_front(int x);
    void push_back(int x);
    bool isEmpty();
    void del(int x);
    void clear();
    void reverse();
};

linkedList::linkedList()
    :first{nullptr}
    {}

void linkedList::printList(){
    if(isEmpty()){
        cout << "The list is empty.";
        return;
    }
    listNode *current = first;
    while(current != nullptr){
        cout << current->data << "\n";
        current = current->next;
    }
}

void linkedList::push_front(int x){
    if(first == nullptr){
        listNode *newNode = new listNode(x);
        first = newNode;
        return;
    }
    listNode *newNode = new listNode(x);
    newNode->next = first;
    first = newNode;
}

void linkedList::push_back(int x){
    if(first == nullptr){
        listNode *newNode = new listNode(x);
        first = newNode;
        return;
    }  
    listNode *newNode = new listNode(x);
    listNode *current = first;
    while(current->next != nullptr){
        current = current->next;
    }
    current->next = newNode;
}

bool linkedList::isEmpty(){
    return first == nullptr;
}

void linkedList::del(int x){
    listNode *current = first; 
    listNode *previous = nullptr;
    while(current != nullptr && current->data != x){
        previous = current;
        current = current->next;
    }
    if(current == nullptr){
        cout << "There is no " << x << " in list."; 
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

void linkedList::clear(){
    if(isEmpty()){
        cout << "The list is Empty.";
        return;
    }   
    while(first != nullptr){
        listNode *current = first;
        first = first->next;
        delete current;
        current = nullptr;
    }
}

void linkedList::reverse(){
    if(isEmpty()){
        cout << "The list is Empty.";
        return;
    }
    listNode *current = first;
    listNode *previous = nullptr;
    while(current != nullptr){
        listNode *tmp = current->next;
        current->next = previous;
        previous = current;
        current = tmp;
    }
    first = previous;
}

int main(){
    linkedList List;
    cout << "please enter the function you want,\n";
    cout << "ex: pf, pb, prL, del, re, cl, enter \"end\" close.\n";
    cout << "Enter the function:\n";
    string func;
    int num;
    while(func != "end"){
        cin >> func;
        if(func == "pf"){
            cout << "please enter a num:";
            cin >> num;
            List.push_front(num);
        }
        else if(func == "pb"){
            cout << "please enter a num:";
            cin >> num;
            List.push_back(num);
        }
        else if(func == "prL"){
            List.printList();
        }
        else if(func == "del"){
            cout << "please enter a num:";
            cin >> num;
            List.del(num);
        }
        else if(func == "re"){
            List.reverse();
        }
        else if(func == "cl"){
            List.clear();
        }
    }
    return 0;
}