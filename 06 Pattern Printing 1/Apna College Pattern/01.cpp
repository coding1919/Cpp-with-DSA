#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=1; i<=n ; i++){
        for(int j=1; j<=n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4 
    // 1 2 3 4
    return 0;
}

// outer loop -> n times
//      1 to n
// 1 single row -> innerloop
//      1 to n - numbers print
