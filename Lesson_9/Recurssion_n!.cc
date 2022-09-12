#include <iostream>
using namespace std;

int f(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n * f(n-1);
    }
}

int main(){
    cout << "please enter a num:";
    int n;
    cin >> n;
    int ans;
    ans = f(n);
    cout << ans;
    return 0;
}