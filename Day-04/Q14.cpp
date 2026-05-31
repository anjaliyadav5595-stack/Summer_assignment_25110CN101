#include<iostream>
using namespace std;
int main(){
    int n ,first=0,second=1,next;
    cout<<"ENTER TERM NUMBER:";
    cin>>n;
    if(n==1){
        cout<<"Term"<<n<<":"<<first;
    }
    else if(n==2){
        cout<<"Term"<<n<<":"<<second;
    }
    else{
        for(int i=3;i<=n;i++){
            next=first+second;
            first=second;
            second=next;
        }
        cout<<"Term"<<n<<":"<<second;
    }
}