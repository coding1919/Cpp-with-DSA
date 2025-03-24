// in this array should be sorted in ascending or decending
// dictionary method searching

// target = 3
//       0   1   2    3    4
// arr | 2 | 3 | 6 | 10 | 11 |
// start = 0, end = 4
// mid = (start+end)/2 = (0+4)/2 = 2 -> 6
// 6 == 3 (false)
// 6 < 3 (false)
// 6 > 3 (true) (left side)
// start = 0, end = mid-1 = 2-1 = 1 
//       0   1
// arr | 2 | 3 |
// mid = (0+1)/2 = 0 -> 2
// 2 == 3 (false)
// 2 < 3 (false) (right side)
// start = mid+1 = 0+1 = 1, end = 1
//       1
// arr | 3 |
// mid = (1+1)/2 = 1 -> 3
// 3==3 (true) (found)

// optimal way for mid because it can overflow
// mid = start + (end-start)/2

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
            start = mid + 1;
        }
        else{
            end = mid - 1;
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
    cout<<"Enter the lement to be searched: ";
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