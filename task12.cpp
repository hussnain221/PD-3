#include<iostream>
using namespace std;
main()
{
int n,w,h;
cout<<"Enter the number of square metres you can paint: ";
cin>>n;
cout<<"Enter width of single wall: ";
cin>>w;
cout<<"Enter height of single wall: ";
cin>>h;
int walls;
walls=n/(w*h);
cout<<"Number of walls you can paint: "<<walls;
}