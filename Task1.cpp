#include<iostream>
using namespace std;
main()
{
int n;
cout<<"Enter the number of sides:"<<" ";
cin>>n;
int sum=(n-2)*180;
cout<<"The sum of internal angles of "<<n<<"-sided polygon is:"<< sum;
}