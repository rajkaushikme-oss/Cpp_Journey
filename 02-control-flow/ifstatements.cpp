#include<iostream>
using namespace std;

int main()
{
    bool isMale = true;
    bool isTall = false;
    if (isMale && isTall){
        cout << "You are a male";
    }  else if(isMale && !isTall){
        cout << "You are a short male";
    } else {
        cout << "You are not a male";
    }

    return 0;
}
/*  
    set theory baby 
    when two variables are to be put in one if you can 
    either put 'and' operator or 'or' operator
    and = &&    or = ||   
    negation = !'before condition'
*/