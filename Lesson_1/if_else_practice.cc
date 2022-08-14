#include <iostream>

using namespace std;

int main(){
    cout << "Please enter your chinese score:";
    int chinese;
    cin >> chinese;
    
    cout  << "Please enter your math score:";
    int math;
    cin >> math;

    cout << "Q1\n\n";

    if(chinese >= 60){
        cout << "chinese pass\n";
    }
    else{
        cout << "chinese failed\n";
    }

    if(math >= 60){
        cout << "math pass\n";
    }
    else{
        cout << "math failed\n";
    }

    cout << "\n";

    cout << "Q2\n\n";

    if(chinese >= 60 && math >= 60){
        cout << "both pass\n";
    }
    else if(chinese >= 60){
        cout << "chinese pass, but math failed";
    }
    else if(math >= 60 ){
        cout << "math pass, but chinese failed";
    }
    else{
        cout << "both failed";
    }

    return 0;
}