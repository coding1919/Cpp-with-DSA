// An array is given in decreasing order with Key, Find the index of key, if key is not present, print -1;

// key = 7
//       0   1   2   3   4  
// arr | 9 | 7 | 6 | 4 | 2 |
// start = 0, end = 4
// mid = (0+4)/2 = 2 -> 6!=7
// 6<7 (true)
// start = 0, end = 1
// mid = (0+1)/2 = 0 -> 9!=7
// 9<7 (false)
// 9>7 (true)
// start = 1, end = 1
// mid = (1+1)/2 = 1 -> 7==7 (true)
// returns 1


#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid;
    while(start <= end){
        mid = (start + end) / 2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr[1000];
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;
    cout<<"Binary Search: "<<endl;
    int bsValue = binarySearch(arr, n, key);
    cout<<bsValue<<endl;
    return 0;
}

// Time Complexity -> 
// Best case = O(1)
// Average case = O(logn)
// Worst case = O(logn)

// Space Complexity -> O(1)