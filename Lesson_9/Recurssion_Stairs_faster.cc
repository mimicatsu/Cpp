#include <iostream>
using namespace std;

//declaration 
void fillArr(int *A, int size, int val);//fill in arr a Num
int S(int n);//initialize the arr
int calculate(int n, int *memo);//calculate the ans ,put it in arr

int main(){
    cout << "please enter a num:";
    int n;
    cin >> n;
    cout << "There is " << S(n) << " ways.";
    return 0;
}

void fillArr(int *A, int size, int val){
    for(int i = 0; i < size; i++){
        A[i] = val;
    }
}

int S(int n){
    int memo[n+1];
    fillArr(memo, n+1, -1);
    return calculate(n, memo);
}

int calculate(int n, int* memo){
    if(memo[n]!=-1){
        return memo[n];
    }
    if(n <= 2){
        memo[n] = n;
    }
    else{
        memo[n] = calculate(n-1, memo)+calculate(n-2, memo);
    }
    return memo[n];
}

