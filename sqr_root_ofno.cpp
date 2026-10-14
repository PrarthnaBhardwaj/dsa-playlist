#include<iostream>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
     long long start = 1,end = x;
    long long ans = 0;
     while(start<=end)
     {
       long long mid = (start + end)/2;
       long long sq = (mid*mid);
        if(sq<=x)
        {
        ans = mid;
        start = mid+1;
        }
        else
        end = mid-1;
     }
     return ans;
    }
};