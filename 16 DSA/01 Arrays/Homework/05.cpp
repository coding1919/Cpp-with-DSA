// Take 20 elements from user input and find its sum with the help of an array.

#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int sum = 0;
    int n = 20;
    cout<<"Enter 20 elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Sum: "<<endl;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    cout<<sum<<endl;
    return 0;
}
