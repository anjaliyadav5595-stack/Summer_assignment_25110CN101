#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int original,rev=0;
    original=n;
    while(n!=0){
        rev=rev*10+n%10;
        n=n/10;
    }
    if(original==rev){
        cout<<"the number is a palindrome";
    }
    else{
        cout<<"the number is not a palindrome";3
    }
    
}