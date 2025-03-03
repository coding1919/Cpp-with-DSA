#include <iostream>
using namespace std;

void changeArr(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i] = 2*arr[i];
    }
    cout<<"Size of arr in parameters: "<< sizeof(arr)<<endl; // 8 which takes an address which is of size 8 and address is of an arr[0] so it a pointer not an actual array it takes
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
    cout<<"Original Array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Double Of Array: "<<endl;
    changeArr(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Size of arr in arguments: "<< sizeof(arr)<<endl; // 4000 because array size is 1000 and int has 4 bytes so 1000*4 = 4000 (which is an actual array is passed here)
    return 0;
}
