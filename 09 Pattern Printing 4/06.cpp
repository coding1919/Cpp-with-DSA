#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=n; i>=1; i--){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // in this approach we have give one space not two space 

    //     * 
    //    * *
    //   * * *
    //  * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *
    return 0;
}

// row = 1
// row <= n
// print one space, (n - row) times 
// print *, row times
// row = row + 1

// row = n
// row <= 1
// print one space, (n - row) times 
// print *, row times
// row = row - 1 