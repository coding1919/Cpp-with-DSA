#include <iostream>
using namespace std;

int main() {
    for(int i=1; i<=5; i++){
        for(int j=5; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    // 5 4 3 2 1 
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    // 5 4 3 2 1
    return 0;
}

// row = 1
// row <= 5
// print 5 to 1
// row = row + 1