#include <iostream>
using namespace std;

int main() {
    for(int i=1; i<=5; i++){
        for(char ch='F'; ch<='K'; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

    // F G H I J K 
    // F G H I J K
    // F G H I J K
    // F G H I J K
    // F G H I J K
    return 0;
}
