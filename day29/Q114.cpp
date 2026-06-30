#include<iostream>
using namespace std;
int main(){
    int n,ch; cout<<"Enter size: "; cin>>n;
    int a[n];
    do{
        cout<<"\n1.Input 2.Display 3.Sum 4.Max 5.Exit\n"; cin>>ch;
        if(ch==1){for(int i=0;i<n;i++) cin>>a[i];}
        else if(ch==2){for(int i=0;i<n;i++) cout<<a[i]<<" ";}
        else if(ch==3){int s=0; for(int i=0;i<n;i++) s+=a[i]; cout<<s;}
        else if(ch==4){int m=a[0]; for(int i=1;i<n;i++) if(a[i]>m) m=a[i]; cout<<m;}
    }while(ch!=5);
    return 0;
}