#include<iostream>
using namespace std;
main()
{
int age,move;
cout<<"Enter the person's age: ";
cin>>age;
cout<<"Enter the number of times they have moved: ";
cin>>move;
int lived;
lived=age/(move+1);
cout<<"Average number of years lived in the same house: "<<lived;
}