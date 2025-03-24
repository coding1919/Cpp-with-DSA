//       0   1   2   3   4   5
// arr | 5 | 7 | 7 | 8 | 8 | 10 |
// first = -1
// last = -1
// 5==8 (false)
// 7==8 (false)
// 7==8 (false)
// 8==8 (true) -> first == -1 (true)
// first = 3 -> 8
// 8==8 (true) -> first == -1 (false)
// last = 4 -> 8
// 10==8 (false)
// stop

// First Position: 3
// Last Position: 4


#include <iostream>
using namespace std;

void firstLastPosition(int arr[], int n, int key, int &first, int &last){
    first = -1, last = -1;
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            if(first == -1){
                first = i;
            }
            last = i;
        }
    }
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
    cout<<"First and Last position of element in sorted array: "<<endl;
    int first, last;
    firstLastPosition(arr, n, key, first, last);
    cout<<"First Position: "<<first<<endl;
    cout<<"Last Position: "<<last<<endl;
    return 0;
}
