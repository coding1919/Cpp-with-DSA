// Write a function to swap the max and min number of an array 
#include <iostream>
using namespace std;

int minimumArray(int arr[], int n){
    int ans = INT_MAX;
    int index = 0;
    for(int i=0; i<n; i++){
        if(arr[i] < ans){
            ans = arr[i];
            index = i;
        }
    }
    return index;
}

int maximumArray(int arr[], int n){
    int ans = INT_MIN;
    int index = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > ans){
            ans = arr[i];
            index = i;
        }
    }
    return index;
}

void swapArray(int arr[], int min, int max){
    int temp;
    temp = arr[min];
    arr[min] = arr[max];
    arr[max] = temp;
}

int main() {
    int n; 
    cout<<"Enter n: ";
    cin>>n;
    int arr[1000];
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int min = minimumArray(arr, n);
    int max = maximumArray(arr, n);
    swapArray(arr, min, max);
    cout<<"Array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
