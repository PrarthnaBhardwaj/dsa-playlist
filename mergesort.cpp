// MIERGE SORT:
#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    // fxn for sorting the array:
    void merge(vector<int>&arr,int low,int mid,int high){
        int left=low;
        int right=mid+1;
        vector<int>temp;
        while(left<=mid && right<=high)
        {
            if(arr[left]<=arr[right])
            {
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left<=mid)
        {
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high)
        {
            temp.push_back(arr[right]);
            right++;
        }
        for(int i=low;i<=high;i++)
        {
            arr[i]=temp[i-low];
        }
    }
    // fxn for dividing the array into sub arrays;
void mS(vector<int>&arr,int low,int high){
    if(low==high)return;
    int mid=(low+high)/2;
    mS(arr,low,mid);
    mS(arr,mid+1,high);
    merge(arr,low,mid,high);
}
};
void mergeSort(vector<int>&arr,int n){
    Solution obj1;
    obj1.mS(arr,0,n-1);
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergeSort(arr,n);
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}