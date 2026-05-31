#include<iostream>
using namespace std;
int main(){
int n,first=0,second=1,next;
cout<<"enter number of terms:";
cin>>n;
cout<<"FIBONACCI SERIES:";
for (int i=1;i<=n;i++){
    if(i==1){
        cout<<first<<" ";
        continue;
    }
    if(i==2){
        cout<<second<<" ";
        continue;
    }
    next=first+second;
    cout<<next<<" ";
    first=second;
    second=next;
}

}