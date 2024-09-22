#include<iostream>
using namespace std;
main()
{
int size;
int cost;
int area;
cout<<"Enter size of the fertilizer bag in pounds: ";
cin>>size;
cout<<"Enter the cost of fertilizer per bag: $";
cin>>cost;
cout<<"Enter area in square feet that can be covered by bag: ";
cin>>area;
int cp,cs;
cp=cost/size;
cs=cost/area;
cout<<"Cost of fertilizer per pound: $"<<cp<<endl;
cout<<"Cost of fertilizer per square: $"<<cs;
}