#include <iostream>
using namespace std;

void Triangle(int n){
    for(int i = 1; i <= n; i++){
        for(int j = n-i; j >= 0; j--){
            cout << " ";
        }
        for(int s = 1; s <= i*2-1; s++){
            cout << "*";
        }
        cout << "\n"; 
    }
}


int main(){
    cout << "Please enter a num:";
    int n;
    cin >> n;
    Triangle(n);
    return 0;
}