#include <iostream>
using namespace std;

void printArray(int *Array, int size){
   for(int i = 0; i < size; i++){
      cout << *(Array + i) <<" ";
   }
   cout<<"\n";
}


int main(){
    cout << "please enter a size:";
    int size;
    cin >> size;
    int arr1[size] = {0};
    int arr2[size] = {0};

    int range = 20;

    for(int i = 0; i < size; i++){
        arr1[i] = rand() % range;
        arr2[i] = rand() % range;
    }

    for(int i = 0; i < size; i++){
        int tmp;
        if(arr2[i] > arr1[i]){
            tmp = arr1[i];
            arr1[i] = arr2[i];
            arr2[i] = tmp;
        }
    }

    printArray(arr1, size);
    printArray(arr2, size);

    return 0;
}