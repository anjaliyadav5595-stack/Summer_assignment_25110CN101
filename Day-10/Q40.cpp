#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++)cout<<" ";
        char ch='A';
        for(int k=1;k<=i;k++)cout<<ch++;
        ch-=2;
        for(int l=1;l<i;l++)cout<<ch--;
        cout<<endl;
    }
    return 0;
}