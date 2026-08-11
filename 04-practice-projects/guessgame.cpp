#include<iostream>
using namespace std;

int main(){
    int secretNum = 54;
    int yourAns;
    int guessLimit = 0;
    int limit = 5;
    bool outOfLimit = false;
    
    while(secretNum != yourAns && !outOfLimit){ 
        if(guessLimit < limit){
            cout << "Enter your guess: ";
            cin >> yourAns;
            if(secretNum != yourAns){
                cout << "Try Again" << endl;
            }
        guessLimit++;
        }else{
            outOfLimit = true;
        }
    }
    if(outOfLimit){
        cout << "You are out of limit";
    }else if(secretNum == yourAns){
    cout << "You guessed correctly";
    }
    
    return 0;
}