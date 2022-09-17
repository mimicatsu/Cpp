#include <iostream>
#include <string>
using namespace std;

struct queueNode{
    int data;
    queueNode *next;
    queueNode(int x = 0, queueNode *n = nullptr);
};
queueNode::queueNode(int x, queueNode *n)
    :data{x},next{nullptr}
    {}

struct queueList{
    queueNode *front;
    queueNode *back;
    int size;
    queueList();
    void push(int x);
    void pop();
    bool isEmpty();
    int getFront();
    int getBack();
    int getSize();
};

queueList::queueList()
    :front{nullptr},back{nullptr},size{0}
    {}

void queueList::push(int x){
    if(isEmpty() == true){
        queueNode *newNode = new queueNode(x);
        front = newNode;
        back = front; //他們是同一個點
        size ++;
        return;
    }
    queueNode *newNode = new queueNode(x);
    back->next = newNode;
    back = newNode;//更新back的值
    size ++;
}

void queueList::pop(){
    if(isEmpty() == true){
        cout << "The list is Empty";
        return;
    }
    queueNode *tmp = front->next;
    delete front;
    front = tmp;
    size --;
} 

bool queueList::isEmpty(){return front == nullptr;}

int queueList::getFront(){
    if(isEmpty() == true){
        cout << "The list is Empty";
        exit(1);
    }    
    return front->data;
}

int queueList::getBack(){
    if(isEmpty() == true){
        cout << "The list is Empty";
        exit(1);
    }
    return back->data;
}

int queueList::getSize(){
    return size;
}

int main(){
    queueList queue;
    cout << "Please enter a function, ex. push, pop, getF, getB, size, enter \"end\" end.\n";
    string func;
    while(func != "end"){
        cout << "Please enter a func:";
        cin >> func;
        if(func == "push"){
            cout << "Please enter a num:";
            int num;
            cin >> num;
            queue.push(num);
        }
        else if(func == "pop"){
            queue.pop();
        }
        else if(func == "getF"){
            cout << queue.getFront() << "\n";
        }
        else if(func == "getB"){
            cout << queue.getBack() << "\n";
        }
        else if(func == "size"){
            cout << queue.getSize() << "\n";
        }
    }
    return 0;
}