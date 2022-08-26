 #include <iostream>

#include <bits/stdc++.h>

using namespace std;

vector<int> dx = {-1, 0, 1, 0};

vector<int> dy = {0, 1, 0, -1};

int helper(vector<vector<int>>& grid, int i, int j, int n, int m, vector<vector<int>>& dp)
{
    if(grid[i][j] == 2)
    {
        return 1;
    }
    
    if(dp[i][j] != -1)
    {
        return dp[i][j];
    }
    
    grid[i][j] = -1;
    
    int mini = INT_MAX;
    
    for(int k = 0; k < 4; k++)
    {
        int new_i = i + dx[k];
        
        int new_j = j + dy[k];
        
        if(new_i >= 0 && new_i < n && new_j >= 0 && new_j < m && grid[new_i][new_j] != -1)
        {
            mini = min(mini, helper(grid, new_i, new_j, n, m, dp));
        }
    }
    
    if(mini == INT_MAX)
    {
        return dp[i][j] = INT_MAX;
    }
    
    return dp[i][j] = 1 + mini;
}

int main()
{
    vector<vector<int>> grid = {{1,-1,-1,-1,-1}, {0,-1,-1,-1,-1}, {0,-1,0,0,0},{0,-1,0,-1,0},{0,0,0,-1,2}};
    
    int n = grid.size();
    
    int m = grid[0].size();
    
    vector<vector<int>> dp(n + 1, vector<int> (m + 1, -1));
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(grid[i][j] == 1)
            {
                int mini = helper(grid, i, j, n, m, dp);
                
                if(mini == INT_MAX)
                {
                    cout << -1 << endl;
                }
                else
                {
                    cout << mini << endl;
                }
            }
        }
    }
    
    return 0;
}
