#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER NUMBER:";
    cin>>n;
    int count=0;
    int temp=n;
    while(temp!=0){
        temp=temp/10;
        count++;
    }
    cout<<"THE NUMBER OF DIGITS IN THE GIVEN NUMBER IS:"<<count<<endl;
}