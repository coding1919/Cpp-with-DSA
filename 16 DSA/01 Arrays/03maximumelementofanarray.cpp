#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[1000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>ans){
            ans = arr[i];
        }
    }
    cout<<"Maximum Element: "<<ans<<endl;
    return 0;
}

// ans = max(ans, arr[i]);