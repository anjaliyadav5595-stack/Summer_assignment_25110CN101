#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    string s; cin>>s; map<char,int> f;
    for(char ch:s) f[ch]++;
    char ans; int maxc=0;
    for(auto p:f) if(p.second>maxc){maxc=p.second; ans=p.first;}
    cout<<ans;
}