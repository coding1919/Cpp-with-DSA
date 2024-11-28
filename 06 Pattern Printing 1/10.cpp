#include <iostream>
using namespace std;

int main() {
    // my method
    int n = 1;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cout<<n<<"  ";
            n++;
        }
        cout<<endl;
    }

    cout<<endl;

    // another method by video
    for(int row=1; row<=5; row=row+1){
        for(int col=1; col<=5; col++){
            cout<<(row-1)*5+col<<"  ";
        }
        cout<<endl;
    }

    // 1  2  3  4  5  
    // 6  7  8  9  10  
    // 11  12  13  14  15  
    // 16  17  18  19  20
    // 21  22  23  24  25
    return 0;
}

// row = 1
// row <= 5
// print count 5 times (increase)
// row = row + 1