#include<iostream>
using namespace std;
int longSubarray(int arr[],int n,int k){
int sum=0;
int length = 0;
int i,j;
for(int i=0;i<n;i++)
{
    for(int j=i;j<n;j++)
    {
        sum=sum+arr[j];
        if(sum==k)
        {
         length = max(length,i-j+1);
         return length;
        }

    }
}
}
int main(){
    int arr[1000] = {1,2,3,1,1,1,1,4,2,3};
    int k=3;
    int n=10;
    cout<<longSubarray(arr,10,3);
    return 0;
}