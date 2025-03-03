// Missing Number
// Given input by the user N = 6
// size of an array = N-1 = 5
//            0   1   2   3   4
// arr[5] = | 1 | 3 | 4 | 5 | 6 |
// size is 5
// index is from 0 to 4
// The elements present in that array is between 1 to N, that is 1,2,3,4,5,6
// all elements occurs only 1 times
// N has 6 elements and array has size 5 so one element will be missed we need to find that element
// in the above array the missing eleemnt is 2

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int missingNumber(int arr[], int n){
    int totalSum = 0;
    for(int i=1; i<=n; i++){
        totalSum = totalSum + i;
    }
    int arraySum = 0;
    for(int i=0; i<n-1; i++){
        arraySum = arraySum + arr[i];
    }
    return totalSum - arraySum;
}

int main() {
    srand(time(NULL));
    int n; 
    cout<<"Enter n: ";
    cin>>n;
    int sz = n-1;
    int arr[1000];
    int missingNum = (rand() % n) + 1;
    int index = 0;
    for(int i=1; i<=n; i++){
        if(i == missingNum){
            continue;
        }
        arr[index++] = i;
    }
    for(int i=0; i<n-1; i++){
        int j = rand() % (n-1);
        swap(arr[i], arr[j]);
    }
    cout<<"Random "<<sz<<" elements: "<<endl;
    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Missing Number: "<<missingNumber(arr, n);
}
