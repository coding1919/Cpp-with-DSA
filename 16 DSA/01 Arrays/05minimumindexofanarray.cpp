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
    int ans = INT_MAX;
    int index = 0;
    for(int i=0; i<n; i++){
        if(arr[i]<ans){
            ans = arr[i];
            index = i;
        }
    }
    cout<<"Minimum Element Index: "<<index<<endl;
    return 0;
}
