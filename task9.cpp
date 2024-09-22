#include<iostream>
using namespace std;
main()
{
int n;
cout<<"Enter a 4-digit number: ";
cin>>n;
int a,b,c,d,sum;
sum=0;
a=n%10;
sum=sum+a;
b=(n/10)%10;
sum=sum+b;
c=(n/100)%10;
sum=sum+c;
d=(n/1000)%10;
sum=sum+d;
cout<<"The sum of individual digits: "<<sum;
}