#include<iostream>
using namespace std;

int main()
{
    string name = "Raj Kaushik";
    cout << name << endl;
    cout << name.length() << endl;
    cout << name[4] << endl;
    name[4] = 'B';
    cout << name << endl;
    cout << name[4];
}
/*  
    name.length()
    name.substr(8, 3)
    name.find("Kaus, 0")
*/