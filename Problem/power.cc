#include <iostream>
using namespace std;

int power(int base, int degree){
    int ans = base;
    for(int i = 1; i < degree; i++){
        ans = ans * base;
    }
    return ans;
}

int main(){
    cout << "please enter a base:";
    int base;
    cin >> base;
    cout << "please enter a degree:";
    int degree;
    cin >> degree;

    cout << power(base, degree);

    return 0;

}