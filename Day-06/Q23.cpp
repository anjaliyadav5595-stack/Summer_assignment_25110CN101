##include<iostream>
using namespace std;
int countsetbits(int n){
    int count=0;
    while(n){
        cout+=n&1;
        n>>1;
 
    }
    return count;
}
int main(){
    int num;
    cout<<"enter number:";
    cin>>num;
    cout<<"set bits:"<<countsetbits(num);
    return 0;
}