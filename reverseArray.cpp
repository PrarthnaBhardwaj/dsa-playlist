// Reverse an array using recursion:
#include<iostream>
#include<algorithm>
using namespace std;
void reverseArray(int arr[],int i,int n){
if(i>=n/2) return;
else{
swap(arr[i],arr[n-i-1]);
reverseArray(arr,i+1,n);
}
}
int main()
{
    // enter values of array:
    int arr[1000];
    int n;
    cout<<"Enter the total no. of elements:";
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    reverseArray(arr,0,n);
    // print array:
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}