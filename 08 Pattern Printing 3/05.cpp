#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int j=n-(n-i); j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=5-i; j++){
            cout<<"  ";
        }
        for(int j=i; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

//         1
//       2 1
//     3 2 1
//   4 3 2 1
// 5 4 3 2 1
    return 0;
}

// row = 1
// row <= 5
// print space, (5 - row) times
// print row to 1
// row = row + 1
