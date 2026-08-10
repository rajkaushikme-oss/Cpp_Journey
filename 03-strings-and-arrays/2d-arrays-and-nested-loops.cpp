#include<iostream>
using namespace std;

int main(){

    int numGrid[3][2] = {
                    {2,3},
                    {3,5},
                    {1,6}
    };
    for(int i=0; i < 3; i++){
        for(int j=0; j<2; j++){
        cout << numGrid[i][j];
        }
        cout << endl;
    }
    
    cout << numGrid[2][1];
}