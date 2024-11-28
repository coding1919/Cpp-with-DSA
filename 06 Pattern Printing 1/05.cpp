#include <iostream>
using namespace std;

int main() {
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    // 1 2 3 4 5 
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    return 0;
}

// row = 1
// row <= 5
// print 1 to 5
// row = row + 1