#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0)); int n=rand()%100+1, g;
    do{cout<<"Guess 1-100: "; cin>>g;
        if(g>n) cout<<"Too high\n"; else if(g<n) cout<<"Too low\n";
    }while(g!=n);
    cout<<"Correct!";
}
