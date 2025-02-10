#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=0; i<n ; i++){
        for(int j=0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    // * * * *
    // * * * *
    // * * * *
    // * * * *
    return 0;
}

// outer loop -> n times
//      1 to n
// 1 single row -> innerloop
//      1 to n - * print
