#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    string s; cin>>s; map<char,int> f;
    for(char ch:s) f[ch]++;
    for(char ch:s) if(f[ch]==1){cout<<ch; return 0;}
    cout<<"None";
}