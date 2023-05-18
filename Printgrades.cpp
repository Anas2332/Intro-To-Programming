#include<iostream>
    using namespace std;
         main()
        {
        float percent;
        cout<<"Enter your percentage:";
        cin>>percent;
        if(percent>80){
            cout<<"A";
        } 
        else if(percent>70){
            if(percent<80)
            cout<<"B";;
        } 
        else if(percent>60){
            if(percent<70)
            cout<<"c";
        }
        else if(percent>50){
            if(percent<60)
            cout<<"D";
        }
        else if(percent>40){
            if(percent<50)
            cout<<"E";
        }
        else{
            cout<<"F";
        }}