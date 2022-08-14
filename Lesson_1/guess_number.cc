#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    cout << "Please enter a number:";
    int number;
    int rand_num;
    cin >> number;
    srand(time(0));
    rand_num = rand()%number;

    int guess_num;
    while(guess_num != rand_num && guess_num >= 0 ){
        cout << "Please guess a number:";
        cin >> guess_num;
        if(guess_num == rand_num){
            cout << "You great!\n";
        }
        else if(guess_num > rand_num){
            cout << "Too big!\n";
        }
        else if(guess_num < 0){
            cout << "You failed!\n";
        }
        else{
            cout << "Too small!\n";
        }
    }

    return 0;
}