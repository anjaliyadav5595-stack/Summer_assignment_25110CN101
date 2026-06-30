#include<iostream>
using namespace std;
int main(){
    int score=0, ans;
    cout<<"QUIZ APP\n";

    cout<<"Q1. What is 5+3? \n1.7 2.8 3.9\nAns: "; cin>>ans;
    if(ans==2) score++;

    cout<<"Q2. C++ is a? \n1.Language 2.OS 3.Browser\nAns: "; cin>>ans;
    if(ans==1) score++;

    cout<<"Q3. 10/2 =? \n1.2 2.4 3.5\nAns: "; cin>>ans;
    if(ans==3) score++;

    cout<<"\nYour Score: "<<score<<"/3";
    return 0;
}