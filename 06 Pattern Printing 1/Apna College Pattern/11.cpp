// Reverse Triangle (Alphabet)

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=0; i<n; i++){
        char ch = 'A' + i;
        for(int j=0; j<i+1; j++){
            cout<<ch<<" ";
            ch--;
        }
        cout<<endl;
    }
    // Enter number: 4
    // A
    // B A
    // C B A
    // D C B A
    return 0;
}
