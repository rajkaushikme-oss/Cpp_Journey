#include<iostream>
using namespace std;
/*
void sayHi(string name);

int main()
{
    cout << "Top\n";
    sayHi("Raj Kaushik");
    
    return 0;
}

void sayHi(string name){
    cout << "Hello " << name;
}
*/
double cube(double num){
    double result = num*num*num ;
    return result;
    cout << "hello"; /*this will not get printed as return breaks the function*/
}

int main()
{
    double ans = cube(4);
    cout << ans;
    return 0;
}