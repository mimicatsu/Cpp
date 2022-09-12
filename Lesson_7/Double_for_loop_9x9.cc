#include <iostream>
using namespace std;

void multiTable(){
    for(int i = 1; i <= 9; i++){
        cout << "\n";
        for(int j = 1; j <= 9; j++){
            cout << i << "*" << j << "=" << i*j << " "; 
        }
    }
}

int main(){
    multiTable();
    return 0;
}