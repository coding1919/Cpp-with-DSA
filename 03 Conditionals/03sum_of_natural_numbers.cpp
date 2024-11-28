#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;
    cout<<"Enter number: ";
    cin>>num;
    for(int i=1; i<=num; i++){
        sum = sum + i;
    }
    cout<<"Sum is "<<sum<<endl;

    // sum of n natural numbers but sum will always be 15 if num > 5 (using break)
    sum = 0;
    for(int i=1; i<=num; i++){
        sum = sum + i;
        if(i == 5){
            break;
        }
    }
    cout<<"Sum is "<<sum<<endl;
    return 0;
}

// break is a keyword which is reserved word in c++
