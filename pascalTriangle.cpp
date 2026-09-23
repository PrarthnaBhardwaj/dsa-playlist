#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    vector<int>pascalTriangle(int row){
        int ans=1;
        vector<int>ansRow;
        ansRow.push_back(1);
        for(int col=1;col<=row;col++){
          ans=ans*(row-col);
          ans=ans/col;
          ansRow.push_back(ans);
        }
       return ansRow;
    }
    
};
 vector<vector<int>>generate(int eachrow)
    {
         Solution obj1;
        vector<vector<int>>ans;
        for(int i=0;i<eachrow;i++)
        {
            ans.push_back(obj1.pascalTriangle(i));
        }
      return ans;
    }
    
