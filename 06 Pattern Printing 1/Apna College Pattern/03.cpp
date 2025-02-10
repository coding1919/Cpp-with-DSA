#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=0; i<n ; i++){
        char ch = 'A';
        for(int j=0; j<n; j++){
            cout<<ch<<" ";
            ch++; // ch = ch + 1 or ch += 1
        }
        cout<<endl;
    }
    // Enter number: 4
    // A B C D
    // A B C D
    // A B C D
    // A B C D
    return 0;
}

// outer loop -> n times
//      0 to n-1
// 1 single row -> innerloop
//      0 to n-1, chars print
