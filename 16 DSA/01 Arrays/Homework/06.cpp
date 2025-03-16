// Calculate the average of elements in an array of size 18

#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int sum = 0;
    int n = 18;
    cout<<"Enter 18 elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Average: "<<endl;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    cout<<sum/n<<endl;
    return 0;
}
