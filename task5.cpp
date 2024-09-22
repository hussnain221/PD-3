#include<iostream>
using namespace std;
main()
{
string name;
cout<<"Enter the name of person: ";
cin>>name;
float weight;
cout<<"Enter target weight you want to lose in kilogram: ";
cin>>weight;
float target=weight*15;
cout<<name<<" will lose "<<weight<<" kg of weight in "<<target<<" days by following the doctor's suggestions.";
}