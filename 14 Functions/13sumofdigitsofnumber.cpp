#include <iostream>
using namespace std;

int sumOfDigit(int n){
    int remainder, digitSum = 0;
    while(n!=0){
        remainder = n % 10;
        digitSum = digitSum + remainder;
        n = n / 10;
    }
    return digitSum;
}

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int digitSum = sumOfDigit(n);
    cout<<digitSum<<endl;
    return 0;
}

// Enter number: 154
// 10


// 1+5+4 = 10 -> Sum of Digit