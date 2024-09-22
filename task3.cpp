#include<iostream>
using namespace std;
main()
{
int initial,acceleration,time;
cout<<"Enter initial velocity (m/s): ";
cin>>initial;
cout<<"Enter acceleration (m/s^2): ";
cin>>acceleration;
cout<<"Enter time (s): ";
cin>>time;
int final=(acceleration*time)+initial;
cout<<"Final velocity (m/s): "<<final;
}