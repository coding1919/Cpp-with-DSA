#include <iostream>
using namespace std;

int main() {
    // my method
    for(char ch='a'; ch<='e'; ch++){
        for(int j=1; j<=5; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

    // another method by video
    for(int row = 1; row <= 5; row++){
        char name = 'a' + (row - 1);
        for(int col = 1; col <= 5; col++){
            cout<<name<<" ";
        }
        cout<<endl;
    }

    cout<<endl;


    // a a a a a
    // b b b b b
    // c c c c c
    // d d d d d
    // e e e e e
    return 0;
}

// row = 1
// row <= 5
// name = 'a' + (row-1)
// print name 5 times
// row = row + 1
