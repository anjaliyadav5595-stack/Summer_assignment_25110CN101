#include<iostream>
using namespace std;
int main(){
    int start,end;
    cout<<"enter start and end:";
    cin>>start>>end;
    cout<<"prime numbers between"<<start<<"and"<<end<<":";
    for(int n = start; n<=end;n++ ){
        int flag=0;
        if(n<=1) continue;
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0) cout << n << " ";
        
    }
}
