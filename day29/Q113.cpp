#include<iostream>
using namespace std;
int main(){
    int ch; float a,b;
    do{
        cout<<"\n--- CALCULATOR ---\n";
        cout<<"1.Add 2.Subtract 3.Multiply 4.Divide 5.Exit\n";
        cout<<"Enter choice: "; cin>>ch;

        if(ch>=1 && ch<=4){
            cout<<"Enter 2 numbers: "; cin>>a>>b;
        }

        if(ch==1) cout<<"Result: "<<a+b;
        else if(ch==2) cout<<"Result: "<<a-b;
        else if(ch==3) cout<<"Result: "<<a*b;
        else if(ch==4) {
            if(b!=0) cout<<"Result: "<<a/b;
            else cout<<"Error: Divide by 0";
        }
        else if(ch==5) cout<<"Exiting...";
        else cout<<"Invalid choice";

    }while(ch!=5);
    return 0;
}