#include<iostream>
using namespace std;
int main(){
    string s1, s2;
    cout<<"Enter 2 strings: ";
    cin>>s1>>s2;
    cout<<"Common characters: ";

    for(int i=0; i<s1.length(); i++){
        // check if s1[i] exists in s2 and not printed before
        if(s2.find(s1[i])!= string::npos && s1.find(s1[i], i+1) == string::npos){
            cout<<s1[i]<<" ";
        }
    }
    return 0;
}