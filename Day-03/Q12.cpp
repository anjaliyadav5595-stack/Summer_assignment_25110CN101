#include<iostream>
using namespace std;
int main(){
    int a,b,x,y,lcm;
    cout<<"enter two numbers:";
    cin>>a>>b;
    x=a;y=b;
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;

    }
    lcm=(x*y)/a;
    cout<<"LCM:"<<lcm;
}