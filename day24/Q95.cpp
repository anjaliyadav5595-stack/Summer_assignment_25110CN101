#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string line, word, longest;
    getline(cin,line); stringstream ss(line);
    while(ss>>word) if(word.length()>longest.length()) longest=word;
    cout<<longest;
}