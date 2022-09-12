#include <iostream>
using namespace std;


void prem(char *list, int n);



int main(){
    cout << "please type a num you want to prem: ";
    int n;
    cin >> n;
    cout << "please enter "<< n <<" alphat you want to prem, ex: a b c d." << "\n";
    char list[n];
    for(int i = 0; i < n; i++){
        cin >> list[i];
    }
    prem(list,n);
    return 0;
}

void prem(char *list, int n){
    for(int i = 0; i < n; i++){
        
    }
    prem(list, n);
    for(int i = n; i > 0; i--){
        swap(list[i-1],list[i]);
    }
}

