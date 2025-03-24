//       0   1   2   3    4    5    6    7
// arr | 1 | 4 | 6 | 8 | 10 | 14 | 16 | 18 |
// key = 5

// i=0
// 1>=5 (false)
// i=1
// 4>=5 (false)
// i=2
// 6>=5 (true)
// returns 2


#include <iostream>
using namespace std;

int searchInsertPosition(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] >= key){
            return i;
        }
    }
    return n;
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
    cout<<"Search Insert Position: "<<endl;
    int position = searchInsertPosition(arr, n, key);
    cout<<position<<endl;
    return 0;
}