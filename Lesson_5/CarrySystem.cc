#include <iostream>
using namespace std;


void CarrySystem(int n , int carry){
    int base = 1;
    int count = 0;
    while(base * carry <= n){
        base = base * carry;
        count++;
    }
    
    int size = count + 1;
    int array[size] = {0};
    int val = n;
    int p = base;
    
    for(int i = 0; i < size; i++){
        array[i] = val/p;
        val = val % p;
        p = p/carry;
        cout << array[i] ;
    }  

}

int main(){
    cout << "please enter a number:";
    int n;
    cin >> n;
    cout << "please enter a carry:";
    int carry;
    cin >> carry;
    
    CarrySystem(n, carry);
    return 0;
}