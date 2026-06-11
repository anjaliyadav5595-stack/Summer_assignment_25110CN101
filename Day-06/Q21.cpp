#include<iostream>
 #include<vector>
 using namespace std;
 void dectobinary(int n){
    if(n==0){
        cout<<"0";
        return;
    }
    vector<int>binary;
    while(n>0){
        binary.push_back(n%2);
        n/=2;
    }
    for(int i=binary.size()-1;i>=0;i--)
    cout<<binary[i];
 }
 int main(){
    int num;
    cout<<"enter decimal:";
    cin>>num;
    cout<<"binary:";
    dectobinary(num);
    return 0;

 }
