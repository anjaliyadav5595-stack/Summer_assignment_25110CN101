#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int product=1;
    if(n==0){
        product=0;
    }
    else {
        while(n!=0){
            product=product*n%10;
            n=n/10;
        }
    }
    cout<<"the product of digits is:"<<product;

}