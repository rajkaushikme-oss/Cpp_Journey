#include<iostream>
using namespace std;

double calculator(){
    double num1, num2;
    string op;
    cout << "Enter 1st number: " << endl;
    cin >> num1;
    cout << "Enter operator: " << endl;
    cin >> op;
    cout << "Enter 2st number: " << endl;
    cin >> num2;
    double result;
    if(op == "+"){
        result = num1 + num2;
    }    else if(op == "-"){
        result = num1-num2;
    }    else if(op == "*"){
        result = num1*num2;
    }    else{
        result = num1/num2;
    }
    return result;
}
int main()
{
    cout << calculator();
    return 0;
}