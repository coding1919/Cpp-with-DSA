#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int a = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    // Enter number: 3
    // 1 2 3 
    // 4 5 6
    // 7 8 9
    return 0;
}

// outer loop -> n times
// inner loop -> n no's each line
              // n times 