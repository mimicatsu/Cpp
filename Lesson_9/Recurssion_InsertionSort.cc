#include <iostream>
using namespace std;

void Insertion(int *A, int size);
void Array(int *A, int size);

int main(){
    int size = 4;
    int A[size] = {6,3,9,7};
    Insertion(A, size);
    Array(A, size);
    return 0;
}

void Insertion(int *A, int size){
    if (size <= 1)
        return;//base case
    Insertion(A, size-1);//first, enter the recurssion to divid the problem
    int i = size-1;//size = 4, index =0-3, so size need -1
    int temp = A[i];
    for(; i > 0 ; i--){
        if (A[i-1] <= temp){
            break;
        }
        else{
            A[i] = A[i-1];
        }
    }
    A[i] = temp;//when break, we need to insert is A[i]
}

    

void Array(int *A, int size){
    for(int i = 0; i < size; i++){
        cout << A[i] << " ";
    }
}