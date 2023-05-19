#include<iostream>
using  namespace std;
    int main(){
        int a;
        int b;
        char c;
        cout<<"Enter a number:";  
        cin>>a;
        cout<<"Enter a number:";
        cin>>b;
        cout<<"Enter an operator:";
        cin>>c;
        if(c=='+'){
            cout<<a+b;
        }
        else if(c=='-'){
            cout<<a-b;
        }
        else if(c=='*'){
            cout<<a*b;
        }
        else if(c=='/'){
            cout<<a/b;
        }
        else if(c=='%'){
            cout<<a%b;
        }
        else{
            cout<<"Invalid operator";
        }
    }