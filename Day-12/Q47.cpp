#include<iostream>
using namespace std;
void printfibonacci(int n){
    int a=0,b=1;
    cout<<"fibonacci series:";
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        int next=a+b;
        a=b;
        b=next;
    }
}
int main(){
    int n;
    cout<<"enter number of terms:";
    cin>>n;
    printfibonacci(n);
    return 0;
}