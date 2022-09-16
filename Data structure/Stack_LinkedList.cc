#include <iostream>
using namespace std;

struct stackNode{
    int data;
    stackNode *next;
    stackNode(int x = 0 , stackNode *n = nullptr);
};

stackNode::stackNode(int x, stackNode *n)
    :data{x},next{nullptr}
    {}

struct stackList{
    stackNode *top;
    int size;
    stackList(stackNode *t = nullptr, int s = 0);
    void push(int x);
    void pop();
    bool isEmpty();
    int getSize();
    int Top();
};

stackList::stackList(stackNode *t , int s)
    :top{nullptr},size{0}
    {}

void stackList::push(int x){
    stackNode *newNode = new stackNode(x);
    newNode->next = top;
    top = newNode;
    size++;
}

void stackList::pop(){
    if(isEmpty() == true){
        cout << "The list is empty.";
        return;
    }
    stackNode *tmp = top->next;
    delete top;
    top = tmp;
    size--;
}

bool stackList::isEmpty(){
    return top == nullptr;
}

int stackList::getSize(){
    return size;
}

int stackList::Top(){
    if(isEmpty() == true){
        cout << "The list is empty.";
        exit(1);
    }
    return top->data;
}

int main(){
    stackList stack;
 
    cout << "please enter a function, ex: push, pop, size, Top, enter \"end\" end.\n";
    string func;
    while(func != "end"){
        cout << "please enter:";
        cin >> func;
        if(func == "push"){
            cout << "please enter a num:";
            int x;
            cin >> x;
            stack.push(x);
        }
        else if(func == "pop"){
            stack.pop();
          
        }
        else if(func == "size"){
            cout << stack.getSize() << "\n";
        }
        else if(func == "Top"){
            cout << stack.Top() << "\n";
        }
    }
    return 0;
}
