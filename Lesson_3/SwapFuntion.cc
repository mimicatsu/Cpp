#include <iostream>
using namespace std;

void Swap(int *ptr1, int *ptr2){
    int tmp;
    tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;
}

int main(){
    int a = 10;
    int b = 15;
    int *aPtr = &a;
    int *bPtr = &b;
    
    Swap(aPtr,bPtr);
    cout << a << "\n";
    cout << b ;
    return 0;
}