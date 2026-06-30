#include<iostream>
using namespace std;
int main(){
    string s; cin>>s; string r="";
    for(char c:s) if(r.find(c)==string::npos) r+=c;
    cout<<r;
}