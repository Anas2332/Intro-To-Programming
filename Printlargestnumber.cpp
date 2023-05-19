#include<iostream>
using namespace std;
    int main(){
    int a;
    int b;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"Enter another number:";
    cin>>b;
    if(a<b){
        cout<<"b";
    }
    else if(a>b){
        cout<<"a";
    }
    else{
        cout<<"Equal";
    }
}