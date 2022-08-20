#include <iostream>
using namespace std;

void addval(int *valPtr, int addNum){
    *valPtr = *valPtr  + addNum;
}

int main(){
    int val = 65;
    int *ptr = &val;
    addval(ptr, 10);
    cout << val;
    
    return 0;
}