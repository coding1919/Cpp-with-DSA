#include <iostream>
#include <algorithm>
using namespace std;

int smallestPositiveInteger(int arr[], int n){
    bool vis[n] = {false};
    for(int i=0; i<n; i++){
        if(arr[i] > 0 && arr[i] <= n){
            vis[arr[i] - 1] = true;
        }
    }
    for(int i=0; i<n; i++){
        if(!vis[i]){
            return i+1;
        }
    }
    return n+1;
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
    
    int integer = smallestPositiveInteger(arr, n);
    cout<<"Smallest Positive Integer: "<<integer<<endl;

    return 0;
}

// Time complexity -> O(n)
// Space complexity -> O(n)
