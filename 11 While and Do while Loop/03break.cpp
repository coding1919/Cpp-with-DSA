#include <iostream>
using namespace std;

int main() {
    // break statement
    // to break the loop in particular iteration

    int i=1;
    while (i<=10)
    {
        if(i==5){
            break;
        }
        cout<<i<<" ";
        i++;
    }
    cout<<endl;

    // using input 
    i=1;
    int n;
    cout<<"Enter number: ";
    cin>>n;
    while(i<=n){
        if(i==9){
            break;
        }
        cout<<i<<" ";
        i++;
    }
    cout<<endl;
    
    return 0;
}
