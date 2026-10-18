// max(min distance of magnetic balls:)
class Solution {
public:
bool maxPosDis(vector<int>&arr,int dist,int magnets)
{
    int countMagnet = 1,last = arr[0];
    int n = arr.size();
    for(int i=1;i<n;i++)
    {
     if((arr[i] - last) >= dist)
   {
     last = arr[i];
    countMagnet++;
   }
}
   if(countMagnet>=magnets) return true;
   else
   return false;
}
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n = position.size(),mid = 0;
        int start = 1;
        int end = position[n-1] - position[0];
        while(start<=end)
        {
            mid = (start + end)/2;
            if(maxPosDis(position,mid,m) == true)
            start = mid + 1;
            else
            end = mid - 1; 
        }
        return end;
    }
};