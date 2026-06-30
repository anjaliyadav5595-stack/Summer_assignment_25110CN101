#include <iostream>
#include <string>
using namespace std;
int main() {
    string s; getline(cin,s); string r="";
    for(char ch:s) if(ch!=' ') r+=ch;
    cout<<r;
}