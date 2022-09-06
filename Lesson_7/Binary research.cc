#include <iostream>
using namespace std;


int Binary(int *A, int size, int num){
    int l = 0;
    int r = size - 1;

    while(l <= r){
        int m = (r + l)/2;
        if(A[m] == num){
            return m;
        }
        else if(A[m] > num){
            r = m - 1;
        }
        else{
            l = m + 1;
        }
    }
    return -1;
    
}
int main() {
    cout << "please guess a number:";
    int size = 5;
    int A[size] = {1,3,5,6,9};
    int num;
    cin >> num;
    cout << Binary(A, size, num);

    return 0;
}