#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"the value of n is:";
    cin>>n;
    int fact=1;
    int i=1;
    while(i<=n){
        fact=fact*i;
        i++;
    }
    cout<<"the factorial of n is:"<<fact<<endl;
}