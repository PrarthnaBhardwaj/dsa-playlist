// m = no of bouquets:
// k = no of adjuscent flowers:
class Solution {
public:
    bool possible(vector<int>&arr,int days,int m,int k)
    {
        long long count = 0,noOfB = 0;
        long long n = arr.size();
        for(int i = 0;i<n;i++)
        {
            if(arr[i]<=days)
            count++;
            else
            {
            noOfB += (count/k);
            count = 0;
            }
        }
        noOfB += (count/k);
        if(noOfB >= m) return true;
        else return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
       int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        int mid = 0;
        long long n = bloomDay.size();
        if(n<(long long)m*k) return -1;
        while(low <= high)
        {
            mid = (low + high)/2;
            if(possible(bloomDay,mid,m,k) == true)
                high = mid-1;
            else
            low = mid+1;
        }
      return low;  
    }
};