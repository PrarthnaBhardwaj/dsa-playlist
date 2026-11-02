class Solution {
public:
int findRowIndex(vector<vector<int>>&mat,int m,int n,int col)
{
    // finding maximum element row index: loop over column
   int maxRowElement = -1,index = -1;
    for(int i=0;i<m;i++)
    {
        if(mat[i][col]>maxRowElement)
        {
            maxRowElement = mat[i][col];
            index = i;
        }
    }
     return index;
}
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        // size of matrix:
        int m = mat.size();
        int n = mat[0].size();
        // applying binary search :
        int low = 0,high = n-1,mid = 0;
        while(low<=high)
        {
            mid = (low + high)/2;
            int  MaxRowIndex = findRowIndex(mat,m,n,mid);
            int left = mid-1>=0 ? mat[MaxRowIndex][mid-1] : -1;
            int right = mid+1<n ? mat[MaxRowIndex][mid+1] : -1;
            if(mat[MaxRowIndex][mid]>left && mat[MaxRowIndex][mid]>right)
         {
               return {MaxRowIndex,mid};
         }
            else if(mat[MaxRowIndex][mid]<left)
           {
             high = mid-1;
           }
            else
           {
             low = mid+1;
           }
        }
        return {-1,-1};
    }
};