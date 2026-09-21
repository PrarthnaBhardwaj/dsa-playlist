// ONE LEFT ROTATION IN AN ARRAY:

#include<iostream>
using namespace std;
int main()
{
int arr[1000]={1,2,3,4,5,7,6};
int temp=arr[0];
for(int i=1;i<7;i++){
    arr[i-1]=arr[i];
}
arr[6]=temp;
for(int j=0;j<7;j++)
cout<<arr[j]<<" ";
    return 0;
}
