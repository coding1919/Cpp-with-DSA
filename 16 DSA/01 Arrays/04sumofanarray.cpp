#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[1000];
    cout<<"Enter "<<n<<" numbers: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    cout<<"Sum of array: "<<sum<<endl;
    return 0;
}
