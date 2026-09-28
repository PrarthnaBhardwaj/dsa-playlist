// Insertion sort :
#include<iostream>
using namespace std;
class Solution{
    public:
    void insertionSort(int arr[],int n)
    {
        for(int i=1;i<n;i++)
        {
           int j = i;
           while(j>0 && arr[j]<arr[j-1])
            {
                  int temp = arr[j];
                  arr[j] = arr[j-1];
                  arr[j-1] = temp;
                  j--;
                
            }
        }
        return ;
    }
};
int main()
{
    int n;
    cout<<"Enter your total no. of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter your elemens";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    Solution obj1;
    obj1.insertionSort(arr,n);
    cout<<"Your sorted array after Insertion sort is\n";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

}