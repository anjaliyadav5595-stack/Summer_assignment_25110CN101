#include<iostream>
#include<string>
#include<math>
using namespace std;
int bintodec(string binary){
    int decimal=0;int power=0;
    for(int i=binary.length()-1;i>=0;i--);{
if(binar[i]=='1')
decimal+=pow(2,power);
power++
    }
    return decimal;
    
}
int main(){
    string binary;
    cout<<"enter binary:";
    cin>>binary;
    cout<<"decimal:"<<bintodec(binary);
    return 0;
}