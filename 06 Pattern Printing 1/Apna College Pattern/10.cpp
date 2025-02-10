// Floyds Triangle Pattern

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int a = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    // Enter number: 4
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    return 0;
}
