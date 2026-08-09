#include<iostream>
using namespace std;

int getMax(int num1, int num2){
    int result;
    if(num1 > num2){
        result = num1;
    }   else if(num1 < num2){
        result = num2;
    }

    return result;
}


int main(){
    cout << getMax(54,35);
    return 0;
}

