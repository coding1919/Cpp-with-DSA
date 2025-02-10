// Armstrong numbers 
// 27 - 2 digits so 2^2 + 7^2 = 4 + 14 = 18 != 27 -> not a armstrong number
// 153 - 3 digits so 1^3 + 5^3 + 3^3 = 4 + 125 + 27 = 153 == 153 -> armstrong number

#include <iostream>
#include <cmath>
using namespace std;

int countDigit(int n){
    int count = 0;
    while(n){
        count++;
        n = n / 10;
    }
    return count;
}

bool armstrong(int num, int digit){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    while(n){
        remainder = n%10;
        result = result + pow(remainder, digit);
        n = n/10;
    }
     if(num == result){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int num = 153;

    int digit = countDigit(num); 
    cout<<armstrong(num, digit)<<endl;
    return 0;
}
