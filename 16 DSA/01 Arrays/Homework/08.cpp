// Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.

#include <iostream>
using namespace std;

int main() {
    char arr[1000];
    char ch = 'a';
    for(int i=1; i<=26; i++){
        arr[i] = ch;
        ch++;
    }
    cout<<"Printing from a to z: "<<endl;
    for(int i=1; i<=26; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}