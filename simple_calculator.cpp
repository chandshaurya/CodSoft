#include<iostream>
using namespace std;
int main() {
    float a,b;
    cout <<"Enter a is ";
    cin >> a;
    cout <<"Enter b is ";
    cin >>b;

    char opn ;
    cin >> opn;

    switch(opn){
        case('+'):
        cout<<" sum is " <<a+b<<endl;
        break;
        case('-'):
        cout<<" diff is " <<a-b<<endl;
        break;
        case('*'):
        cout<<" mul  is " <<a*b<<endl;
        break;
        case('/'):
        cout<<" divison is " <<a/b<<endl;
    }








}
