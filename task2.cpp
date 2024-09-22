#include<iostream>
using namespace std;
main()
{
int minutes,frames;
cout<<"Number of Minutes:"<<" ";
cin>>minutes;
cout<<"Frames per Second:"<<" ";
cin>>frames;
int total=minutes*60*frames;
cout<<"Total number of fremes: "<<total;
}