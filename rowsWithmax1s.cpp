class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int>ans;
        int maxi = INT_MIN;
        int pos = 0,count = 0;
        // loop for searching:
        for(int i = 0;i<n;i++)
        {
               count = 0;
        for(int j=0;j<m;j++){
            if(mat[i][j] == 1)
                count++;
            }
            if(count == maxi)
             continue;
             
           else if(count>maxi)
           {
            maxi = count;
            pos = i;  
           } 
        }
        ans.push_back(pos);
        ans.push_back(maxi);
        return ans;
    }
};