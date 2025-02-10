// 2! - 2 -> last zeros are 0
// 6! - 720 -> last zeros are 1
// 8! - 40320 -> last zeros are 1
// 10! - 3628800 -> last zeros are 2
// 11! - 39916800 -> last zeros are 2

// 6! - 1*2*3*  4  *5*  6
//      1*2*3*(2^2)*5*(2*3)

//      1*(2^4)*(3^2)*5
// zero we get when 5*2 = 10 -> 1 zero (because factor of 10 is 2 and 5)
// if 2^3 and 5^2 then there will be 2 zeroes

// no of 5 is less than no of 2
// so we just have to know the no of 5's which will give the no of zeroes

// 2^x * 5^z
// x>z

// so we will get one 5's in
// 5, 10, 15, 20, 30, 35, 40, 45
// but we get two 5's in 
// 25, 50

// so we have to count the no of 5's

// 15/5 = 3 -> 3 zeroes
// 20/5 = 4 -> 4 zeroes
// 18/5 = 3 -> 3 zeroes
// 25/5 = 5 -> 5/5 = 1 -> 6 zeroes
// numerator should be less than 5 so divided

// 100! = 100/5 = 20 -> 20/5 = 4 -> 24 zeroes 
// 148! = 148/5 = 29 -> 29/5 = 5 -> 5/5 = 1 -> 35 zeroes 

#include <iostream>
using namespace std;

int trailingZeroes(int n){
    int count = 0;
    while(n>=5){
        count = count + n/5;
        n = n / 5;
    }
    return count;
}

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int zeroes = trailingZeroes(n);
    cout<<zeroes<<endl;
    return 0;
}
