#include <iostream>
using namespace std;

int main() {
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cout<<"4 ";
        }
        cout<<endl;
    }

    cout<<endl;

    int n = 4;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cout<<n<<" ";
        }
        cout<<endl;
    }

    // 4 4 4 4 4 
    // 4 4 4 4 4
    // 4 4 4 4 4
    // 4 4 4 4 4
    // 4 4 4 4 4
    return 0;
}
