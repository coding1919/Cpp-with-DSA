#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
    // Enter number: 4
    // 1 
    // 1 2 
    // 1 2 3 
    // 1 2 3 4 
    return 0;
}
