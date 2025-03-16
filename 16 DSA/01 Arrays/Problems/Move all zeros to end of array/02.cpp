#include <iostream>
using namespace std;

void moveZeroesToEnd(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            arr[count] = arr[i];
            count++;
        }
    }
    while(count < n){
        arr[count++] = 0;
    }
}

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[1000];
    cout<<"Enter "<<n<<" numbers: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Original Array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    moveZeroesToEnd(arr, n);
    cout<<"Move all zeros to end of array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}

// Time complexity -> O(n)
// Space complexity -> O(1)