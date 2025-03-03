#include <iostream>
using namespace std;

int maximumElement(int arr[], int n){
    int ans = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i] > ans){
            ans = arr[i];
        }
    }
    return ans;
}

int secondMaximumElement(int arr[], int n, int maxElement){
    int ans = INT_MIN;
    bool found = false;
    for(int i=0; i<n; i++){
        if(arr[i] < maxElement && arr[i] > ans){
            ans = arr[i];
            found = true;
        }
    }
    if(found){
        return ans;
    }
    else{
        return -1;
    }
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
    int maxElement = maximumElement(arr, n);
    int secondMax = secondMaximumElement(arr, n, maxElement);
    cout<<"Second Maximum: "<<secondMax<<endl;
    return 0;
}
