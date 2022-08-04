#include<bits/stdc++.h>
using namespace std;

int f(int i, int j, vector<vector<int>> & matrix, vector<vector<int>> &dp)
{
    int m = matrix.size();
    int n = matrix[0].size();
    
    if(i<0 || j<0 || i==m || j==n) return -1e9;
    if(i == 0) return matrix[i][j];
    
    int ans = INT_MIN;
    
    ans = max(ans,f(i-1,j,matrix,dp)) + matrix[i][j];
    ans = max(ans,f(i-1,j-1,matrix,dp)) + matrix[i][j];
    ans = max(ans,f(i-1,j+1,matrix,dp)) + matrix[i][j];
    
    return ans;
}
int getMaxPathSum(vector<vector<int>> &matrix)
{
   int m = matrix.size();
   int n = matrix[0].size();
   vector<vector<int>> dp(m,vector<int>(n,-1));
   
   int maxSum = INT_MIN;
   for(int j=0; j<n; j++)
   {
       maxSum = max(maxSum, f(m-1,j,matrix,dp));
   }
   return maxSum;
}