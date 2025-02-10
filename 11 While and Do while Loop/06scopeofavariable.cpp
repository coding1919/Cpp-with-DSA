#include <iostream>
using namespace std;

int main() {
    // Scope of a variable
    // the variable which is used here can be used anywhere within this block or curly braces {} 
    int num;

    // same variable are not allowed within the same block
    // int num; - Wrong
    // in different blocks it is allowed
    int n = 10;
    if(n==10){
        int n = 20;
        cout<<n<<endl;
    }
    cout<<n<<endl;

    int i=30;
    for(int i=20; i<=30; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    // within block is local block
    return 0;
}
