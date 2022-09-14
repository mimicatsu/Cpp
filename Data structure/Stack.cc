#include <iostream>
using namespace std;

class StackArray{
private:
    int top; //index of top element
    int capacity; //means memory space
    int *stack; //the stack which represent array
    void DoubleCapacity();
public:
    StackArray();
    bool IsEmpty();
    void Push(int x); // add x
    void Pop();//pop the top item
    int Top();
    int getSize();

};

StackArray::StackArray(){//constructor
    top = -1;
    capacity = 1;
    stack = new int[capacity];
}

void StackArray::DoubleCapacity(){
    capacity *= 2;
    int *newStack = new int[capacity];
    for(int i = 0; i < capacity/2; i++){
        newStack[i] = stack[i];
    }
    delete []stack;
    stack = newStack;
}

void StackArray::Push(int x){
    if(top == capacity - 1){
        DoubleCapacity();
    }
    stack[++top] = x;
}

void StackArray::Pop(){
    if(IsEmpty() == true){
        cout << "\nThe stack is empty.";
        return;
    }
    top--;//top = top-1; new the top
}

bool StackArray::IsEmpty(){
    return top == -1;
}

int StackArray::Top(){
    if(IsEmpty() == true){
        cout << "The stack is empty.";
        exit(1);
    }
    return stack[top];
}

int StackArray::getSize(){
    return top+1;
}

int main(){
    StackArray Arr;
    Arr.Pop();
    Arr.Push(14);
    Arr.Push(3);
    cout << "\ntop:" << Arr.Top() << "\nsize:" << Arr.getSize();
    Arr.Push(7);
    cout << "\ntop:" << Arr.Top() << "\nsize:" << Arr.getSize();
    Arr.Pop();
    Arr.Pop();
    cout << "\ntop:" << Arr.Top() << "\nsize:" << Arr.getSize();
    Arr.Pop();
    cout << "\ntop:" << Arr.Top() << "\nsize:" << Arr.getSize();
    return 0;
}
