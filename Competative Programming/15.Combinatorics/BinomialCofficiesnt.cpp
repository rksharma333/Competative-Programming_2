#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> binomialCoefficient(int n)
{
    vector<vector<int>> matrix(n,vector<int>(n,0));
    matrix[0][0] = 1;
    int k=2;
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<k; j++)
        {
            if(j==0 || j==k-1) matrix[i][j]=1;
            else{
                matrix[i][j] = matrix[i-1][j] + matrix[i-1][j-1];
            }
        }
        k++;
    }
    return matrix;
}

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> matrix = binomialCoefficient(n);
    cout<<matrix[10][3]<<endl;
}