#include <iostream>
using namespace std;

void f(int n){
    if( n >= 0){
        f(n-1);
        cout << n <<"\n";
    }
}

int main(){
    cout << "please enter a num:";
    int n;
    cin >> n;
    f(n);
    return 0;
}