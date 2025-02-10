// Inverted Triangle Pattern (Alphabet)

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    char ch = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<"  ";
        }
        // for(int j=i; j<n; j++){
        for(int j=0; j<n-i; j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
    // Enter number: 4
    // A A A A
    //   B B B
    //     C C
    //       D
    return 0;
}
