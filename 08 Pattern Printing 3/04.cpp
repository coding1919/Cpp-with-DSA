#include <iostream>
using namespace std;

int main() {
    char ch;
    cout<<"Enter character (in caps): ";
    cin>>ch;
    for(char c = 'A'; c <= ch; c++){
        for(char d='A'; d<=(ch-c)+'A'; d++){
            cout<<"  ";
        }
        for(char d='A'; d<=c; d++){
            cout<<d<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
            cout<<"  ";
        }
        for(char c='A'; c<='A'+(i-1); c++){
            cout<<c<<" ";
        }
        cout<<endl;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=5-i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            char name = 'A' + j-1;
            cout<<name<<" ";
        }
        cout<<endl;
    }

    //         A
    //       A B
    //     A B C
    //   A B C D
    // A B C D E
    return 0;
}

// row = 1
// row <= 5
// print space (5 - row) times
// print 'A' to 'A' + (row - 1)
// row = row + 1