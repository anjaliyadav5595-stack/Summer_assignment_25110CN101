#include<iostream>
using namespace std;
int main(){
    int start,end,num,original,digit,sum;
    cout<<"ENTER START ANND END:";
    cin>>start>>end;
    cout<<"ARMSTRONG NUMBER BETWEEN "<<start<<"and"<<end<<":";
    for(int i=start;i<=end;i++){
        num=i;
        original=i;
        sum=0;
        while(num>0){
            digit=num%10;
            sum+=digit*digit*digit;
            num=num/10;
        }
        if(sum==original)
        cout<<i<<" ";
    }
}


