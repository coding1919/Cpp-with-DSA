// Floyds Triangle Pattern (Alphabet)

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
            ch++;
        }
        cout<<endl;
    }
    // Enter number: 4
    // A
    // B C
    // D E F
    // G H I J
    return 0;
}
