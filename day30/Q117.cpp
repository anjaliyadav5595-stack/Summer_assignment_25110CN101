#include<iostream>
using namespace std;
struct Student{
    int roll; string name; int marks[3];
};
int main(){
    int n; cout<<"Enter n: "; cin>>n;
    Student s[n];
    for(int i=0;i<n;i++){
        cout<<"Roll Name M1 M2 M3: ";
        cin>>s[i].roll>>s[i].name>>s[i].marks[0]>>s[i].marks[1]>>s[i].marks[2];
    }
    cout<<"\nRoll Name Total Avg\n";
    for(int i=0;i<n;i++){
        int total=s[i].marks[0]+s[i].marks[1]+s[i].marks[2];
        cout<<s[i].roll<<" "<<s[i].name<<" "<<total<<" "<<total/3.0<<"\n";
    }
    return 0;
}
