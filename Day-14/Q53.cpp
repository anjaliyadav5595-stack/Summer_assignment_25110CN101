#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key)return i;
    }
    return -1;
}
int main(){
    int n,key;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    cin>>key;
    int idx=linearSearch(arr,n,key);
    if(idx!=-1)cout<<"found at index"<<idx
    else cout<<"not found";
    return 0;
}