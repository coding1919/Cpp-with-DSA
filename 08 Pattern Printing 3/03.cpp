#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=(n-i); j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    //         1
    //       1 2
    //     1 2 3
    //   1 2 3 4
    // 1 2 3 4 5
    return 0;
}

// row = 1
// row <= n
// print space (n - row)
// print 1 to row
// row = row + 1