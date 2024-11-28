#include <iostream>
using namespace std;

int main() {
    for(int i=1; i<=5; i++){
        int n = 1;
        for(int j=5; j>=i; j--){
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=1; i<=5; i++){
        for(int j=1; j<=5-(i-1); j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=1; i<=5; i++){
        for(int j=1; j<=5-i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=5; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
1
    return 0;
}

// row = 1
// row <= 5
// print 1 to 5-(row-1)
// row = row + 1
