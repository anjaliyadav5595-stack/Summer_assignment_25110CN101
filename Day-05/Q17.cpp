#include<iostream>
#include<cmath>
using namespace std;
bool isperfect(int n){
    if(n<2)return false;
    int sum=1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            sum+=i;
            if(i!=n/i)sum+=n/i;
        }
    }
    return sum==n;
}
int main(){
    int num;
    cout<<"enter number:";
    cin>>num;
    if (isperfect(num))
    cout<<num<<"is a perfect number"<<endl;
    else
    cout<<num<<"is not a perfect number"<<endl;
}