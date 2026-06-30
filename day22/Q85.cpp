#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string s; getline(cin,s); string t=s; reverse(t.begin(),t.end());
    cout<<(s==t?"Yes":"No");
}