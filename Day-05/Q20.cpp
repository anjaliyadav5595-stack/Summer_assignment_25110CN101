#include<iostream>
using namespace std;
long long largestprimefactor(long long n){
    long long largest=-1;
    while(n%2==0){
        largest=2;
        n/=2;

    }
    for(long long i=3;i*i<=n;i+=2){
    while(n%i==0){
        largest=i;
        n/=i;
    }
}
if(n>2)largest=n;
return largest;
}
int main(){
    long long num;
    cout<<"enter number:";
    cin>>num;
    cout<<"largest prime factor:"<<largestprimefactor(num)<<endl;
    return 0;
}
