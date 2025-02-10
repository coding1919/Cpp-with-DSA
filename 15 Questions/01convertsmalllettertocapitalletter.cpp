// To convert any small letter alphabet to capital letter alphabet
// h -> H
// y -> Y

#include <iostream>
using namespace std;

char myConvert(char ch){
    char res = ch - 32;
    return res;
}

char inVideoConvert(char ch){
    char res = ch - 'a' + 'A';
    return res;
}

int main() {
    char ch;
    cout<<"Enter small letter: ";
    cin>>ch;
    cout<<myConvert(ch)<<endl;
    cout<<inVideoConvert(ch)<<endl;
    return 0;
}

// Enter small letter: f
// F
// F