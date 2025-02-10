#include <iostream>
using namespace std;

int main() {
    // Logical Operator:
    // && - AND
    // || - OR
    // ! - NOT

    // && (AND):
    // 0  0 | 0
    // 0  1 | 0
    // 1  0 | 0
    // 1  1 | 1

    // || (OR):
    // 0  0 | 0
    // 0  1 | 1
    // 1  0 | 1
    // 1  1 | 1

    // ! (NOT):
    // 0 | 1
    // 1 | 0

    // it gives answer in 0 and 1

    // 2&&3 - true
    // 10&&5 - true
    // 0&&5 - false
    // 3||5 = true
    // 0||5 = true
    // 0||0 = false
    // !10 - 0 (false)
    // !0 - 1 (true)
    // above the non zero numbers are considered as true or 1 znd 0 is considered as false or 0

    // largest of 3 numbers
    int a, b, c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    else{
        cout<<"No"<<endl;
    }

    // using logical operator
    if(a>b && a>c){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    // vowels or consonant using logical operator
    char ch;
    cout<<"Enter alphabet: ";
    cin>>ch;
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        cout<<"Vowel"<<endl;
    }
    else{
        cout<<"Consonant"<<endl;
    }

    // optimization:
    // if(a>b && a>c && a>d) - in this when it checks the condition it checks first condition if it satisfies then the next condition is checked if it is not satisfied then the next condition is not checked

    cout<<!12<<endl;
    cout<<!0<<endl;
    return 0;
}
