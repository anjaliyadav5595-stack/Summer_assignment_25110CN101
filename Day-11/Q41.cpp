#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;
    cout<<"sum= "<<add(a,b);
    return 0;
}