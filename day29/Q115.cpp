#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s; int ch;
    cout<<"Enter string: "; cin>>s;
    do{
        cout<<"\n1.Length 2.Reverse 3.Uppercase 4.Count vowels 5.Exit\n"; cin>>ch;
        if(ch==1) cout<<s.length();
        else if(ch==2){reverse(s.begin(), s.end()); cout<<s;}
        else if(ch==3){for(char &c:s) c=toupper(c); cout<<s;}
        else if(ch==4){int c=0; for(char x:s) if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u') c++; cout<<c;}
    }while(ch!=5);
    return 0;
}