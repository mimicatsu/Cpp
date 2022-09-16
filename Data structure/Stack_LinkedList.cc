#include <iostream>
using namespace std;

struct stackNode{
    int data;
    stackNode *next;
    stackNode(int x = 0, stackNode*n = nullptr);//建構子宣告給預設值
};

stackNode::stackNode(int x, stackNode*n)//這邊就不用再給了
    :data{x}, next{n}//initiallize list
    {}

struct stackList{
    stackNode *top;//top element of list
    int size;
    stackList(stackList *t = nullptr, int size = 0);
    void push(int x);
    void pop();
    bool isEmpty();
    int Top();
    int getSize();
};
stackList::stackList(stackList *t , int s)
    :top{nullptr}, size{0}
    {}

void stackList::push(int x){
    if(isEmpty() == true){
        top = new stackNode(x);
        size++;
        return;
    }
    stackNode *NewNode = new stackNode(x);
    NewNode->next = top;
    top = NewNode;
    size++;
}

void stackList::pop(){
    if(isEmpty() == true){
        cout << "The list is empty.";
        return;
    }
    stackNode *tmp = top;
    top = top->next;
    delete tmp;
    tmp = nullptr;
    size--;
}

bool stackList::isEmpty(){
    return top == nullptr;
}

int stackList::Top(){
    if(isEmpty() == true){
        cout << "The list is empty.";
        exit(1);
    }
    return top->data;
}

int stackList::getSize(){
    return size;
}

int main(){
    stackList Arr;
    Arr.pop();
    Arr.push(14);
    Arr.push(3);
    cout << "\ntop:" << Arr.Top() << "\nsize:" << Arr.getSize();
    Arr.push(7);
    cout << "\ntop:" << Arr.Top() << "\nsize:" << Arr.getSize();
    Arr.pop();
    Arr.pop();
    cout << "\ntop:" << Arr.Top() << "\nsize:" << Arr.getSize();
    Arr.pop();
    cout << "\ntop:" << Arr.Top() << "\nsize:" << Arr.getSize();
    return 0;
}