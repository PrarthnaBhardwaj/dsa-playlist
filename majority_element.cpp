// majority element by Moore's voting algorithm:
#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
int majorityElement(vector<int>&nums){
    int count = 0;
    int el;
    int n = nums.size();
    for(int i=0;i<n;i++)
    {
        if(count ==0)
        {
            count++;
            el = nums[i];
        }
        else if(el == nums[i])
        count++;
        else
        count--;
    }
    int count1 =0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==el)
        count1++;
    
    }
        
    if(count1>n/2){
        return el;
}
    return -1;
 }
};
int main(){
    int n;
    cout<<"Enter your number of elements:";
    cin>>n;
    vector<int>nums;
    cout<<"Enter your elements:";
    for(int i=0;i<n;i++){
    int x;
    cin>>x;
    nums.push_back(x);
}
Solution obj;
cout<<"Your majority element is:"<<obj.majorityElement(nums);
}