#include <iostream> // preprocessor directive
using namespace std;

int main()
{
    cout<<"Hello everyone"<<endl; //printing with new line <<endl
    cout<<"Hello everyone\n"; // printing with new line \n
    cout<<"Hello everyone"<<endl<<"Hello everyone\n"; // in one line two statement
    cout<<2+3<<endl; // operations
    cout<<"2+3"<<endl; // opetations with quotes
    cout<<"Mohammed"<<endl<<"Safwan"<<endl;
    // cout<<"Mohammed\n"<<"Safwan"<<endl; // same
    // cout<<"Mohammed\nSafwan\n"; //same
    return 0;
};

// execution manually ->
// g++ filename.cpp -o filename 
// or
// g++ -o filename filename.cpp
// ./filename.exe
