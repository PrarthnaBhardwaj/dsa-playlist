#include<iostream>
#include<utility>
using namespace std;
void selection_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min = i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[min])
            min = j;
        }
        swap(arr[i],arr[min]);
    }
    return ;
}
int main(){
    int n;
    cout<<"Enter your total number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter your elements:"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    // calling fxn:
    selection_sort(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}
// time complexity: O(n^2)
// for best , average worst case