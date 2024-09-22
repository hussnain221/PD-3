#include<iostream>
using namespace std;
main()
{
string movie;
int adult,child,na,nc;
cout<<"Enter movie name: ";
cin>>movie;
cout<<"Enter the adult ticket price: $";
cin>>adult;
cout<<"Enter the child ticket price: $";
cin>>child;
cout<<"Enter number of adult tickets sold: ";
cin>>na;
cout<<"Enter number of child tickets sold: ";
cin>>nc;
cout<<endl;
int total,charity,remaining;
total=(adult*na)+(child*nc);
charity=0.1*total;
remaining=total-charity;
cout<<"Movie: "<<movie<<endl;
cout<<"Total amount from sold tickets: $"<<total<<endl;
cout<<"Amount donated to charity: $"<<charity<<endl;
cout<<"Remaining amout: $"<<remaining;
}