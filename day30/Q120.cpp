#include<iostream>
using namespace std;
struct Student{
    int roll;
    string name;
    int marks[3];
    int total;
    float avg;
};

// Function 1: Input
void inputData(Student s[], int n){
    for(int i=0;i<n;i++){
        cout<<"\nEnter Roll Name M1 M2 M3: ";
        cin>>s[i].roll>>s[i].name>>s[i].marks[0]>>s[i].marks[1]>>s[i].marks[2];
        s[i].total = s[i].marks[0]+s[i].marks[1]+s[i].marks[2];
        s[i].avg = s[i].total/3.0;
    }
}

// Function 2: Display
void displayData(Student s[], int n){
    cout<<"\nRoll Name M1 M2 M3 Total Avg\n";
    cout<<"------------------------------------\n";
    for(int i=0;i<n;i++){
        cout<<s[i].roll<<" "<<s[i].name<<" ";
        for(int j=0;j<3;j++) cout<<s[i].marks[j]<<" ";
        cout<<s[i].total<<" "<<s[i].avg<<"\n";
    }
}

// Function 3: Search by roll
void searchStudent(Student s[], int n){
    int r; cout<<"Enter roll to search: "; cin>>r;
    for(int i=0;i<n;i++){
        if(s[i].roll==r){
            cout<<"Found: "<<s[i].name<<" Avg: "<<s[i].avg;
            return;
        }
    }
    cout<<"Not found";
}

int main(){
    int n,ch;
    cout<<"Enter number of students: "; cin>>n;
    Student s[n];

    do{
        cout<<"\n--- MINI PROJECT MENU ---\n";
        cout<<"1.Input 2.Display 3.Search 4.Exit\nChoice: "; cin>>ch;

        if(ch==1) inputData(s,n);
        else if(ch==2) displayData(s,n);
        else if(ch==3) searchStudent(s,n);

    }while(ch!=4);
    return 0;
}