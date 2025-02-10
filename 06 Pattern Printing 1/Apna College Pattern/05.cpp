#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    // Enter number: 4
    // *
    // * *
    // * * *
    // * * * *
    return 0;
}


// outer loop -> lines
              // 0 to n-1
// inner loop -> i+1 stars
              // 1 to i+1 (i+1)
              // 0 to i   (i+1)