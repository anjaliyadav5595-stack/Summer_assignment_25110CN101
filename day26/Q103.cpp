#include<iostream>
using namespace std;
int main(){
    int bal=10000, ch, amt;
    do{cout<<"\n1.Bal 2.Deposit 3.Withdraw 4.Exit\n"; cin>>ch;
        if(ch==1) cout<<bal; else if(ch==2){cin>>amt; bal+=amt;}
        else if(ch==3){cin>>amt; if(amt<=bal) bal-=amt; else cout<<"Low bal";}
    }while(ch!=4);
}