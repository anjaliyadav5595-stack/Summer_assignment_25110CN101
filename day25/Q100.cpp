#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool compareByLength(string a, string b){
    return a.length() < b.length(); // shortest first
}

int main(){
    int n;
    cout<<"Enter number of words: ";
    cin>>n;
    string words[n];
    cout<<"Enter words:\n";
    for(int i=0; i<n; i++) cin>>words[i];

    sort(words, words+n, compareByLength);

    cout<<"\nSorted by length:\n";
    for(int i=0; i<n; i++) cout<<words[i]<<" ";
    return 0;
}