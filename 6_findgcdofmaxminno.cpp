#include<iostream>
using namespace std;
int main()
{
int arr[1000];
int n;
cin>>n;
int max=INT_FAST16_MIN;
int min=INT_FAST16_MAX;
int temp=0;
cout<<"Enter your elements:";
for(int i=0;i<n;i++)
cin>>arr[i];

for(int i=0;i<n;i++)
{
    if(arr[i]>max)
    {
    max=arr[i];
}
if(arr[i]<min)
{
    min=arr[i];
}
}
while(min!=0)
{
    temp=max%min; // 12,18
    max=min;
    min=temp;
}
cout<<max;
return 0;
}