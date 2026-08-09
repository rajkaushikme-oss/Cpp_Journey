#include<iostream>
using namespace std;

int main()
{
 /*
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is " << age << endl;
*/  
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello " << name;

    return 0;
}