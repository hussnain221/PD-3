#include<iostream>
using namespace std;
main()
{
float vp,fp;
int vegetables,fruits;
cout<<"Enter vegetables price per kilogram (in coins): ";
cin>>vp;
cout<<"Enter fruits price per kilogram (in coins): ";
cin>>fp;
int vkg,fkg;
cout<<"Enter total kilograms of vegetables: ";
cin>>vkg;
cout<<"Enter total kilograms of fruits: ";
cin>>fkg;
int total;
total=((vp*vkg)+(fp*fkg))/1.94;
cout<<"Total earnings in Rupees (PKR): "<<total;
}