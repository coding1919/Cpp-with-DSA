// Write a function to print all prime numbers from 2 to N

#include <iostream>
using namespace std;

int checkPrime(int n){
    if(n==1){
        return 0;
    }
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return n;
}

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int primeNumber, sum = 0;
    for(int i=1; i<=n; i++){
        primeNumber = checkPrime(i);
        sum = sum + primeNumber;
    }
    cout<<sum<<endl;
    return 0;
}
