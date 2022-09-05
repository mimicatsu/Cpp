#include <iostream>
using namespace std;

int main(){
    int size = 1;
    int *A;
    A = new int[size];

    cout << "please enter a number:" << "\n";
    int num;
    cin >> num;
    int i = 0;
    while(num > 0){
        
       
        if(i == size){
            int *B;
            B = new int[2 * size];
            for(int j = 0; j < size; j++){
                B[j] = A[j];
            }
            size *= 2;
            delete []A;
            A = B;
        }
        A[i] = num;
        i++;
        cout << "please enter a number:" << "\n";
        cin >> num;

        
    }

    for(int j = 0; j < i ; j++){
        cout << A[j] << " ";
    }

    return 0;
}