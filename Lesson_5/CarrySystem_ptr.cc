#include <iostream>
using namespace std;

int power(int base, int degree){
    int ans = 1;
    for(int i = 0; i < degree; i++){
        ans = ans * base;
    }
    return ans;
}

void Carry(int *ptr, int size,int n, int carry, int count){
    int val = n;
    for(int i = 0; i < size; i++){
        int p = power(carry, count);
        int *address = ptr + i;
        *address = val/p;
        val = val % p;
        count --;
    }
}


int main(){
    cout << "please enter a number:";
    int n;
    cin >> n;
    cout << "please enter a carry:";
    int carry;
    cin >> carry;

    int base = carry;
    int count = 0;
    while(base <= n){
        base = base * carry;
        count++;
    }
    
    int size = count + 1;
    int array[size] = {0};
    int *ptr = array;

    Carry(ptr, size, n, carry, count);

    for(int i = 0; i < size; i++){
        cout << array[i];
    }


    return 0;
}