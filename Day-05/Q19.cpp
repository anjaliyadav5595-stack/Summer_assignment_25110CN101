#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printfactors(int n){
    vector<int>factors;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            factors.push_back(i);
            if(i!=n/i)factors.push_back(n/i);
        }
    }
    sort(factors.begin(),factors.end());
    cout<<"factors of"<<n<<":";
    for(int f:factors)cout<<f<<" ";
    cout<<endl;
}
int main(){
    int num;
    cout<<"enter number:";
    cin>>num;
    printfactors(num);
    return 0;
}