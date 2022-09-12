#include <iostream>
using namespace std;

int S(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 2;
    }
    else{
        return S(n-1)+S(n-2);
    }

}

int main(){
    cout << "please enter a num:";
    int n;
    cin >> n;
    cout << "There is " << S(n) << " ways.";
    return 0;
}