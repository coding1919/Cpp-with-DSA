#include <iostream>
using namespace std;

int main() {
    for(int i=1; i<=5; i++){
        for(int j=5; j>5-i; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=1; i<=5; i++){
        int num = 5;
        for(int j=1; j<=i; j++){
            cout<<num<<" ";
            num--;
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=1; i<=5; i++){
        for(int j=5; j>=5-(i-1); j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    // 5
    // 5 4
    // 5 4 3
    // 5 4 3 2
    // 5 4 3 2 1
    return 0;
}

// row = 1
// row <= 5
// print 5 to 5-(row-1)
// row = row + 1