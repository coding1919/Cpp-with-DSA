// Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.

#include <iostream>
using namespace std;

int main() {
    int arr[1000];
    int n;
    int index = -1;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter "<< n <<" elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int elem;
    cout<<"Enter the element to know its index: ";
    cin>>elem;
    for(int i=0; i<n; i++){
        if(arr[i] == elem){
            index = i;
        }
    }
    cout<<"Index: "<<index<<endl;
    return 0;
}
