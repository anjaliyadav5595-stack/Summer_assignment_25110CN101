#include<iostream>
using namespace std;
struct Ticket{
    int id; string name; int seats;
    float price;
};
int main(){
    Ticket t;
    cout<<"Enter Ticket ID Name Seats Price: ";
    cin>>t.id>>t.name>>t.seats>>t.price;

    int book; cout<<"Seats to book: "; cin>>book;
    if(book<=t.seats){
        t.seats-=book;
        cout<<"Booked. Remaining: "<<t.seats<<"\nTotal: Rs "<<book*t.price;
    } else cout<<"Not enough seats";
    return 0;
}