#include<iostream>
using namespace std;

int main(){

    int age = 18;
    int *pAge = &age;
    double cpi = 8.3;
    string name = "Raj";

    cout << "Age " << &age << endl;
    cout << "Age " << *pAge << endl;
    cout << "Age " << pAge << endl;
    cout << "CPI " << &cpi << endl;
    cout << "Name " << &name << endl;

    return 0;
}