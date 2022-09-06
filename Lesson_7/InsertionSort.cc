#include <iostream>
using namespace std;


void Array(int *A, int size){
    for(int i = 0; i < size; i++){
        cout << A[i] << " ";
    }
}

void Insertion(int *A, int size){
    for(int i = 0; i < size; i++){
        int insertionNum = A[i];
        int c = i - 1;// we need initialize outsize the for loop, because we will use c outsite
        for(;c >= 0; c--){
            if(A[c] <= insertionNum){//we need compare the insertionNum, not A[c+1]
                break;
            }
            else{
                A[c+1] = A[c];
            }
        }
        A[c+1] = insertionNum; 
    }
}


int main(){

    int size = 8;
    int A[8] = {7,3,5,1,0,2,9,-1};

    Insertion(A, size);
    Array(A, size);


    return 0;
}