#include<iostream>
using namespace std;
struct Student{
    int roll; string name; float marks;
};
int main(){
    int n; cout<<"Enter number of students: "; cin>>n;
    Student s[n];

    for(int i=0;i<n;i++){
        cout<<"\nEnter Roll Name Marks: ";
        cin>>s[i].roll>>s[i].name>>s[i].marks;
    }

    cout<<"\n--- Student Records ---\n";
    for(int i=0;i<n;i++)
        cout<<s[i].roll<<" "<<s[i].name<<" "<<s[i].marks<<"\n";
    return 0;
}