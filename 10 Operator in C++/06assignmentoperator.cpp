#include <iostream>
using namespace std;

int main() {
    // Assignment Operator
    // =, +=, -=, *=, /=, %=
    // = - assign value from right to left
    // += - a+=b -> a=a+b
    // -= - a-=b -> a=a-b
    // *= - a*=b -> a=a*b
    // /= - a/=b -> a=a/b

    int a, b, res;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<(a+=b)<<endl; // a=a+b
    cout<<(a-=b)<<endl; // a=a-b
    cout<<(a*=b)<<endl; // a=a*b
    cout<<(a/=b)<<endl; // a=a/b
    cout<<(a%=b)<<endl; // a=a%b
    return 0;
}
