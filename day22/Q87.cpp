#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    string s; getline(cin,s); map<char,int> f;
    for(char ch:s) if(ch!=' ') f[ch]++;
    for(auto p:f) cout<<p.first<<":"<<p.second<<" ";
}