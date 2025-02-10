// if both length are same and both breadth are same then it is a rectangle otherwise not

#include <iostream>
using namespace std;

int isRectangle(int a, int b, int c, int d){
    if(a==b&&c==d || a==c&&b==d || a==d&&b==c){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int a, b, c, d;
    cout<<"Enter the length and breadth of rectangle: ";
    cin>>a>>b>>c>>d;
    cout<<"Rectangle: "<<isRectangle(a,b,c,d);
    return 0;
}

