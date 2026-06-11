#include<iostream>
using namespace std;
int sumdigits(int n){
    if(n==0)return 0;
    return(n%10)+sumdigits(n/10);
}
int main(){
    int num;
    cout<<"enter number:";
    coin>>num;
    cout<<"sum of digits:"<<sumdigits(num);
    return 0;
}
