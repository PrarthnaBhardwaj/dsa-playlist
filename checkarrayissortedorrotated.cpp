#include<iostream>
using namespace std;
bool checkrotatedarray(int arr[],int n)
{
    int count=0;
 for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        count++;
    }
    if(arr[n-1]>arr[0])
    {
        count++;
    }
    return count<=1;
}
int main()
{
    int arr[1000];
    int n;
    cout<<"Enter your total number of elements:"<<endl;
    cin>>n;
    cout<<"Enter your elements of the array:";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<checkrotatedarray(arr,n);
    return 0;
}