// // Rotate array d times:
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     int arr[1000]={1,2,3,4,5,6,7};
//     int d;
//     cout<<"Enter your rotating number:";
//     cin>>d;
//     reverse(arr,arr+d);
//     reverse(arr+d,arr+7);
//     reverse(arr,arr+7);
//     for(int i=0;i<7;i++)
//     cout<<arr[i]<<" ";
// }

#include<iostream>
using namespace std;
int main()
{
    int arr[1000]={1,2,3,4,5,6,7};
    int d;
    int n=7;
    cout<<"Enter d";
    cin>>d;
    int temp[d];
    for(int i=0;i<d;i++)
    temp[i]=arr[i];
    for(int j=d;j<n;j++)
    arr[j-d]=arr[j];
    for(int k=n-d;k<n;k++)
    arr[k]=temp[k-(n-d)];
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
}