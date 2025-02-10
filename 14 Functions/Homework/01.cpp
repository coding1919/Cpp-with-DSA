// Write a function to check if a  number is prime or not

bool checkPrime(int n){
    if(n==1){
        return 0;
    }
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int result = checkPrime(n);
    if(result == 1){
        cout<<"Is Prime"<<endl;        
    }
    else{
        cout<<"Is not Prime"<<endl;
    }
    return 0;
}
