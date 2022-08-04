#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> binomialCoefficient(int n)
{
    vector<vector<int>> matrix;
    vector<int> prev;
    prev.push_back(1);
    
    int k=2;
    for(int i=1; i<n; i++)
    {
        vector<int> curr;
        for(int j=0; j<k; j++)
        {
            if(j==0 || j==k-1) curr.push_back(1);
            else{
                int sum = prev[j] + prev[j-1];
                curr.push_back(sum);
            }
        }
        matrix.push_back(prev);
        prev = curr;
        k++;
    }
    matrix.push_back(prev);
    return matrix;
}

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> matrix = binomialCoefficient(n);
    for(auto it : matrix)
    {
        for(int i : it) cout<<i<<" ";
        cout<<endl;
    }
}