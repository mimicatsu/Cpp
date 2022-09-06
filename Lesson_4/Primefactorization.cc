#include <iostream>
using namespace std;

void Primefactorization(int num){
    int size = num+1;
    int arrDegree[size] = {0};
    int remain = num;

    for(int i = 2; i <= size; i++){
        while(remain % i == 0){
            remain = remain / i;
            arrDegree[i]++;
        }
    }

    cout << num << "=";
    bool isFirst = true;
    for(int i = 2; i <= size; i++){
        if(arrDegree[i] != 0){
            if(isFirst == false){cout << "*";}
            cout << i;
            cout << "^";
            cout << arrDegree[i];
            isFirst = false;
        }
    }
}

int main(){
    cout << "please enter a number:";
    int num;
    cin >> num;
    
    Primefactorization(num);
    return 0;
}