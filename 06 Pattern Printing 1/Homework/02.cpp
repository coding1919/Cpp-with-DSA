#include <iostream>
using namespace std;

int main() {
    for(int i=1; i<=6; i++){
        int n = 1;
        for(int j=1; j<=5; j++){
            cout<<n<<" ";
            n = n-1 + (j+1)*2;
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i=1; i<=6; i++){
        int n = 1;
        for(int j=1; j<=5; j++){
            cout<<n<<" ";
            n = n + j*2 + 1;
        }
        cout<<endl;
    }
    // 1 4 9 16 25
    // 1 4 9 16 25
    // 1 4 9 16 25
    // 1 4 9 16 25
    // 1 4 9 16 25
    // 1 4 9 16 25
    return 0;
}
