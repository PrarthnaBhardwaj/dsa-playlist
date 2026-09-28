// WAP in array to count the number of pairs in which arr[i]>arr[j]
#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    // to merge two sorted arrays
    void merge(vector<int>&arr,int low,int mid,int high)
    {
        int count =0;
        vector<int>temp;
        int left=low;
        int right=mid+1;
        while(left<=mid&&right<=high)
        {
            // to increase the number of counts everytime condition hits
            if(arr[left]>arr[right])
            {
                temp.push_back(arr[left]);
                count+=mid-(left+1);
                right++;
            }
            else{
                temp.push_back(arr[right]);
                left++;
            }
        }
        // if all the elements on right half being executed:
        while(left<=mid)
        {
            temp.push_back(arr[left]);
            left++;
        }
        // if the elements on the left half array being executed
        while(right<=high)
        {
         temp.push_back(arr[right]);
         right++;
        }
    return;
    }
void mS(vector<int>&arr,int low,int high)
{
    if(low==high) return;
    int mid = (low+high)/2;
    mS(arr,low,mid);
    mS(arr,mid+1,high);
    merge(arr,low,mid,high);
}
};
