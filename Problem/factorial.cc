#include <iostream>
using namespace std;

int factorial(int n){
    int ans = 1;//need put outside the loop, or it will be initialize every time
    for(int i = 1; i <= n; i++){
       ans = ans * i;
    }

    return ans;
}


int main(){
    cout << "please enter a number:";
    int n;
    cin >> n;

    cout << factorial(n);
    return 0;
}