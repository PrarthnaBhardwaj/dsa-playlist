#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n)
{
    int swapCount = 0;
    for(int i=n-1;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                swapCount = 1;
            }
        }
        if(swapCount == 0) // if there is no swapping happened then array is already sorted and we do not need to iterate over array each time:
            break;
    }
}
int main()
{
    int n;
    cout<<"Enter your total number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter your elements:"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    bubble_sort(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}
