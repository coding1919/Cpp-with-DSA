#include <iostream>
using namespace std;

int main() {
    // space | row |  *
    //   6   |  1  | 1 , 1
    //   4   |  2  | 2 , 2
    //   2   |  3  | 3 , 3
    //   0   |  4  | 4 , 4
    // * - row times
    // (2 * n) - (2 * i) - times space
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        for(int j=1; j<=(2*n)-(2*i); j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    // space | row  |  * 
    //   2   |4 or 1| 3 , 3
    //   4   |3 or 2| 2 , 2
    //   6   |2 or 3| 1 , 1
    //   8   |1 or 4| 0 , 0
    // * - (row-1) times or (n-i) times
    // (2*n)-(2*row-2) times space or (2*i) times

    // first way
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=(n-i); j++){
    //         cout<<"* ";
    //     }
    //     for(int j=1; j<=(2*i); j++){
    //         cout<<"  ";
    //     }
    //     for(int j=1; j<=(n-i); j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // another way
    // for(int i=n; i>=1; i--){
    //     for(int j=1; j<=(i-1); j++){
    //         cout<<"* ";
    //     }
    //     for(int j=1; j<=(2*n)-(2*i-2); j++){
    //         cout<<"  ";
    //     }
    //     for(int j=1; j<=(i-1); j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // video solution
    for(int i=n-1; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        for(int j=1; j<=(2*n)-(2*i); j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

// row = 1
// row <= n
// print *, row times
// print space, (2*n) - (2*i) times
// print *, row times
// row = row - 1

// row = n - 1
// row >= 1
// print *, row times
// print space, (2 * n) - (2 * row) times
// print *, row times
