#include<bits/stdc++.h>
int fn(int ind1,int ind2,string &s,string&t ,vector<vector<int>>&dp){
	
	if(ind1<0||ind2<0){
		return 0;
	}
	if(dp[ind1][ind2]!=-1){
		return dp[ind1][ind2];
	}
	if(s[ind1]==t[ind2]){
		return dp[ind1][ind2]=1+fn(ind1-1,ind2-1,s,t,dp);
	}
	
	return dp[ind1][ind2]=max(fn(ind1-1,ind2,s,t,dp),fn(ind1,ind2-1,s,t,dp));
}



int lcs(string s, string t)
{
	int n=s.size();
	int m=t.size();
	vector<vector<int>> dp(n,vector<int>(m,-1));
	return fn(n-1,m-1,s,t,dp);
}

Time Complexity is O(NM) & Space Complexity is O(NM)+(N+M)
