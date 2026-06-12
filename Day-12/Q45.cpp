#include<iostream>
using namespace std;
bool ispalindrome(int n){
    int original=n;
    int reversed=0;
    while(n>0){
        int digit=n%10;
        reversed=reversed*10+digit;
        n=n/10;
    }
    return original==reversed;
}
int main(){
    int n; cout<<"enter a number:";
    cin>>n;
    if(ispalindrome(n)){
        cout<<n<<"is palindrome";
    } else {
        cout<<n<<"is  not palindrome";
    }
    return 0;
}