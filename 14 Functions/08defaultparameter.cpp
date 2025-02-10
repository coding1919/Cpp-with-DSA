#include <iostream>
using namespace std;

int Sum(int a=10, int b=20){ // used default parameter here
    int sum;
    sum = a + b;
    return sum;
}

int main() {
    int x, y;
    cout<<"Enter two number: ";
    cin>>x>>y;
    cout<<Sum()<<endl;;
    return 0;
}

// Enter two number: 3
// 4
// 30