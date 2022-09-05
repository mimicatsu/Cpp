#include <iostream>
using namespace std;

bool isLager(int num_a, int num_b){
    if(num_a > num_b){
        return true;//1
    }
    else{
        return false;//0
    }
}

int main(){
    cout << "please enter a number a:";
    int a;
    cin >> a;
    cout << "please enter a number a:";
    int b;
    cin >> b;
    cout << isLager(a,b);

    return 0;
}