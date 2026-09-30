#include<iostream>
#include<vector>
#include<utility>
using namespace std;
class Solution{
    public:
    int SubarrayMaxSum( vector<int>&arr,int k)
    {
        int n = arr.size();
        long long sum = arr[0];
        int left = 0,right = 0;
        int maxlen = 0;
        while(right<n)
        {
            while(left<=right && sum>k)
            {
                sum -=arr[left];
                left++;
            }
            if(sum==k)
            {
                maxlen = max(maxlen,right-left+1);
            }
            right++;
            if(right<n) sum +=arr[right];
        }
        return maxlen;
    }
};
int main() {
    int n,k;
    cout<<"Enter your number";
    cin>>n;
    cout<<"Enter your target element:";
    cin>>k;
   vector<int>arr;
    cout<<"Enter your array elements:"<<endl;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
     arr.push_back(a);
    }
  
    Solution obj1;
    int x = obj1.SubarrayMaxSum(arr,k);
    cout<<"Maximum subarray is:"<<x;
    return 0;
}