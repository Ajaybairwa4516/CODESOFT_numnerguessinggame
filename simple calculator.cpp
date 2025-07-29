#include<iostream>
using namespace std;
int main(){
    int i;
    double x,y;
    cout<<"Welcame to calculator\n";
    cout<<"1 addtion\n";
    cout<<"2 subtraction\n";
    cout<<"3 multiplication\n";
    cout<<"4 division\n";
    cout<<"chose a number:";
    cin>>i;
    cout<<"enter a number:";
    cin>>x;
    cout<<"enter a number:";
    cin>>y;
    if(i==1){
        cout<<"Addition:";
        cout<<x+y;
    }else if(i==2){
        cout<<"Subtraction:";
        cout<<x-y;
    }else if(i==3){
        cout<<"Subtraction:";
        cout<<x*y;
    }else if(i==4){
        cout<<"Division:";
        cout<<x/y;
    }else{
        
    }
}