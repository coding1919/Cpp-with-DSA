#include <iostream>
using namespace std;

int main() {
    // for(int i=1; i<=5; i++){
    //     cout<<"*****"<<endl;
    // }
    for(int j=1; j<=5; j++){
        for(int i=1; i<=5; i++){
            cout<<"*";
        }
        cout<<endl;
    }
    // *****
    // *****
    // *****
    // *****
    // *****
    for(int row=1; row<=5; row=row+1){
        for(int col=1; col<=5; col=col+1){
            cout<<"* ";
        }
        cout<<endl;
    }
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    return 0;
}
