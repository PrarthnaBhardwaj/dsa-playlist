#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution{
    public:
    void merge(vector<int>&nums1,int m,vector<int>&nums2,int n)
    {
        int left=m-1;
        int right=0;
        while(left>=0&&right<n)
        {
            if(nums1[left]>nums2[right])
            {
                swap(nums1[left],nums2[right]);
                left--;
                right++;
            }
            else{
                break;
            }
        }
        sort(nums1.begin(),nums1.begin()+m);
        sort(nums2.begin(),nums2.end());
        for(int i=m;i<(m+n);i++)
        {
            nums1[i]=nums2[i-m];
        }
        return;
    }
};


int main() {
vector<int>nums1={1,2,3,4,0,0,0};
vector<int>nums2={1,5,6};
int m=4;
int n=3;
solution obj1;
obj1.merge(nums1,m,nums2,n);
for(int i=0;i<(m+n);i++)
cout<<nums1[i]<<" ";
    return 0;
}