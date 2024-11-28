#include <iostream>
using namespace std;

int main() {
    // my method
    for(int i=0; i<=5; i++){
        for(char ch='a'; ch<='e'; ch++){
            cout<<ch<<" ";
        }
        cout<<endl; 
    }

    cout<<endl;

    // another method by video
    for(int row=1; row<=5; row++){
        for(int col=1; col<=5; col++){
            char name = 'a' + (col-1);
            cout<<name<<" ";
            name++;
        }
        cout<<endl;
    }

    // a b c d e
    // a b c d e
    // a b c d e
    // a b c d e
    // a b c d e
    return 0;
}
