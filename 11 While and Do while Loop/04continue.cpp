#include <iostream>
using namespace std;

int main() {
    // continue statement:
    
    int i=1;
    while (i<=10)
    {
        if(i==5){
            i++;
            continue;
        }
        cout<<i<<" ";
        i++;
    }
    cout<<endl;

    // using for
    for (int i = 1; i <= 10; i++)
    {
        if(i==5){
            continue;
        }
        cout<<i<<" ";
    }
    cout<<endl;
    
    for (int i = 1; i <= 10; i++)
    {
        if(i%4==0){
            continue;
        }
        cout<<i<<" ";
    }
    
    
    return 0;
}
