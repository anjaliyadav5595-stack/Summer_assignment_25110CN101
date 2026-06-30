#include<iostream>
using namespace std;
int main(){
    string s; cin>>s; string r=""; int c=1;
    for(int i=1; i<=s.length(); i++){
        if(s[i]==s[i-1]) c++; else {r+=s[i-1]+to_string(c); c=1;}
    }
    cout<<r;
}