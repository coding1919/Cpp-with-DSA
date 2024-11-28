#include <iostream>
using namespace std;

int main() {
    cout << "a++:" << endl;
    int a = 10;
    int b = a++;
    cout << "b : " << b << endl;
    cout << "a : " << a << endl;

    cout << "++a:" << endl;
    a = 10;
    b = ++a;
    cout << "b : " << b << endl;
    cout << "a : " << a << endl;

    cout << "a--:" << endl;
    a = 10;
    b = a--;
    cout << "b : " << b << endl;
    cout << "a : " << a << endl;
    
    cout << "--a:" << endl;
    a = 10;
    b = --a;
    cout << "b : " << b << endl;
    cout << "a : " << a << endl;

    return 0;
}
