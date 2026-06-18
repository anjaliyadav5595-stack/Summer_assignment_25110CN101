#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
cout<<"duplicates:";
for(int i=0;i<n;i++){
    for(int j=1;j<n;j++){
        if(arr[i]=arr[j]){
            cout<<arr[i]<<" ";
            break;
        }
    }
}
return 0;


}