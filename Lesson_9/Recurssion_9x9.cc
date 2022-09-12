#include <iostream>
using namespace std;

void multiTable(int i= 9){
    if (i > 0){
        multiTable(i-1);
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