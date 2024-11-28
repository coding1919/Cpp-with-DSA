#include <iostream>
using namespace std;

int main() {
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    // 1 
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5
    return 0;
}

// row = 1
// row <= 5
// print row no, row times
// row = row + 1