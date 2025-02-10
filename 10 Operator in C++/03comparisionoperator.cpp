#include <iostream>
using namespace std;

int main() {
    // Comparision Operator
    // {==, >, <, >=, <=, !=}
    // gives 0 or 1 - true or false

    // Equal to (==):
    // 3==3 - true
    // 3==5 - false

    // Greater than (>):
    // 5>3 - true
    // 3>5 - false

    // Lesser than (>):
    // 3<5 - true
    // 5<3 - false

    // Greater than or equal to (>=):
    // 5>=3 - true
    // 3>=3 - true
    // 3>=5 - false

    // Lesser than or equal to (>):
    // 3<=5 - true
    // 3<=3 - true
    // 5<=3 - false

    // Not equal to (!=):
    // 2!=5 - true
    // 2!=2 - false

    // precision - 
    // {>,<,>=,<=} > {==,!=}
    // left to right associtivity

    // 5>4>3
    // 1>3
    // 0

    // 5>4<3==2
    // 1<3==2
    // 1==2
    // 0

    int a, b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;
    cout<<(a>b)<<endl;
    cout<<(a<b)<<endl;
    cout<<(a>=b)<<endl;
    cout<<(a<=b)<<"\n";
    return 0;
}
