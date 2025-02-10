// Reverse Triangle

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=i+1; j>0; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    // Enter number: 4
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    return 0;
}
