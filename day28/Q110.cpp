#include<iostream>
using namespace std;
class Account{int acc; float bal;
public: void create(){cin>>acc>>bal;}
void deposit(float x){bal+=x;} void show(){cout<<acc<<" "<<bal;}};
int main(){Account a; a.create(); a.deposit(1000); a.show();}