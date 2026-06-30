#include <iostream>
#include <string>
#include <set>
using namespace std;
int main() {
    string s; cin>>s; set<char> seen;
    for(char ch:s){ if(seen.count(ch)){cout<<ch; return 0;} seen.insert(ch); }
    cout<<"None";
}