#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    char ch = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
    // Enter number: 4
    // A
    // B B
    // C C C
    // D D D D
    return 0;
}


// outer loop -> lines
              // 0 to n-1
// inner loop -> i+1 number
              // i+1 times 