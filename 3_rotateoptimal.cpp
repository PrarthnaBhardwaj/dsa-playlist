#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[1000]={1,2,3,4,5,6,7,8};
    int d;
    cout<<"Enter your number of rotations:";
    cin>>d;
    reverse(arr,arr+d); // arr+d is excluded:
    reverse(arr+d,arr+8);   // arr+n is excluded:
    reverse(arr,arr+8);     // arr+n is excluded:
    for(int i=0;i<8;i++)
    cout<<arr[i]<<" ";
}