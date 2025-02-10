#include <iostream>
using namespace std;

int main() {
    // Complement of a number
    // 5 = 101 -> 010 = 2
    // 13 = 1101 -> 0010 = 2
    // 27 = 11011 -> 00100 = 4

    // if 1 then 0
    // if 0 then 1

    // 2 | 27 | 
    // 2 | 13 | 1
    // 2 |  6 | 1
    // 2 |  3 | 0
    // 2 |  1 | 1
    //   |  0 | 1
    // 11011 ->
    // 1->0*2^0=0
    // 1->0*2^1=0
    // 1->1*2^2=4
    // 1->0*2^3=0
    // 1->0*2^4=0
    // 0+0+4+0+0 = 4

    // condition n!=0
    // get rem=n%2 
    // make rem=rem^1 (0^1->1 & 1^1->0)
    // ans=ans+rem*mul
    // mul=mul*2

    // n=14, ans=0, mul=1
    // 14!=0 - true
    // rem=14%2=0
    // rem=0^1=1
    // n=14/2=7
    // ans=0+1*1=1
    // mul=1*2=2
    // 7!=0 - true
    // rem=7%2=1
    // rem=1^1=0
    // n=7/2=3
    // ans=1+0*2=1
    // mul=2*2=4
    // 3!=0 - true
    // rem=3%2=1
    // rem=1^1=0
    // n=3/2=1
    // ans=1+0*4=1
    // mul=4*2=8
    // 1!=0 - true
    // rem=1%2=1
    // rem=1^1=0
    // n=1/2=0
    // ans=1+0*8=1
    // mul=8*2=16
    // 0!=0 - false
    // ans=1

    // 14 = 1110 -> 0001 = 1
    return 0;
}
