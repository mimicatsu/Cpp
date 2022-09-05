#include <iostream>
using namespace std;

int fibonacci(int n){
    int ans = 1;
    int f1 = 1;
    int f2 = 1;
    for (int i = 0; i < n - 2; i++){
        ans = f1 + f2;
        f1 = f2;
        f2 = ans;
    }
    return ans;
}

int main(){
    cout << "please enter a number:";
    int n;
    cin >> n;

    cout << fibonacci(n);

    return 0;
}