#include<iostream>
using namespace std;

int main(){
    int secretNum = 7;
    int guess;

    while(secretNum != guess){
        cout << "Enter your guess" << endl;
        cin >> guess;
        if(guess > secretNum){
            cout << "Try lower" << endl;
        }else if(guess < secretNum){
            cout << "Try higher" << endl;
        }
    }
    cout << "you won!";
    return 0;
}