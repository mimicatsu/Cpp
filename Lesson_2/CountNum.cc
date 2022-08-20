#include <iostream>
using namespace std;

int main(){
    cout << "please enter a size:";
    int size;
    cin >> size;
    int array[size] = {0};
    for(int i = 0; i < size; i++){
        array[i] = rand()%10;
    }

    int count[10] = {0};
  
    for(int i = 0; i < size; i++){
        // int can be the index 
        int num = array[i];
        count[num]++;
    }

    for(int i = 0; i < size; i++){
        cout << array[i]<<" ";
    }

    cout << "\n";

    for(int i = 0; i < 10; i++){
        cout << count[i]<<" ";
    }
    return 0;
}
