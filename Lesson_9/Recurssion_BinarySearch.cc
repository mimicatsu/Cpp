#include <iostream>
using namespace std;

int Binary(int *A, int val, int l, int r);

int main(){
    int size = 5;
    int A[size] = {1,3,7,9,10};
    cout << " Please guess a num:";
    int val;
    cin >> val;
    int result = Binary(A, val, 0, size - 1);
    cout << result<<"\n";
    return 0;
}

int Binary(int *A, int val, int l, int r){
    if(r >= l){ 
        int m = (l + r)/2;
        if(A[m] == val){
            return m;
        }
        else if(A[m] < val){
            l = m + 1;
            return Binary(A, val, l, r);
        }
        else{
            r = m - 1;
            return Binary(A, val, l, r);
        }
    }
    return -1;
}