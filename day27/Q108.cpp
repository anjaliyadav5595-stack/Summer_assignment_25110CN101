#include<iostream>
using namespace std;
struct Student{
    int roll; string name;
    float m1, m2, m3, total, avg;
    char grade;
};
int main(){
    int n; cout<<"Enter number of students: "; cin>>n;
    Student s[n];

    for(int i=0;i<n;i++){
        cout<<"\nEnter Roll Name M1 M2 M3: ";
        cin>>s[i].roll>>s[i].name>>s[i].m1>>s[i].m2>>s[i].m3;
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].avg = s[i].total/3;
        if(s[i].avg>=90) s[i].grade='A';
        else if(s[i].avg>=75) s[i].grade='B';
        else if(s[i].avg>=60) s[i].grade='C';
        else s[i].grade='F';
    }

    cout<<"\nRoll Name Total Avg Grade\n";
    for(int i=0;i<n;i++)
        cout<<s[i].roll<<" "<<s[i].name<<" "<<s[i].total<<" "<<s[i].avg<<" "<<s[i].grade<<"\n";
    return 0;
}