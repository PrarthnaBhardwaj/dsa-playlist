#include<iostream>
using namespace std;
int main()
{
    int arr[1000]={1,2,3,4,5,6};
    int d,temp=0;
    cout<<"Enter your rotation number:";
    cin>>d;
    
    for(int i=0;i<d;i++)
    {
        temp=arr[0];
    for(int j=1;j<6;j++)
    {
        arr[j-1]=arr[j];
    }
    arr[5]=temp;
    }
    for(int k=0;k<6;k++)
    cout<<arr[k]<<" ";
    return 0;
}  // time complexity is 0(n*d):