class Solution {
public:
   int dp[13][10001];

int solve(vector<int>& coins, int amount, int count) {
    if (count == 0) {
        return dp[count][amount] = (amount == 0 ? 1 : 0);
    }
    if (dp[count][amount] != -1) {
        return dp[count][amount];
    }
    if (coins[count - 1] <= amount) {
        return dp[count][amount] = solve(coins, amount - coins[count - 1], count) + solve(coins, amount, count - 1);
    } else {
        return dp[count][amount] = solve(coins, amount, count - 1);
    }
}

// int coinChange(vector<int>& coins, int amount) {
//     memset(dp, -1, sizeof(dp));
//     return solve(coins, amount, coins.size());
// }
int coinChange(vector<int>& c, int V) 
	{ 
        int n=c.size();
	    int t[n+1][V+1];
	    
	    t[0][0] = 0;
	    
	    for(int i=1;i<n+1;i++)
	    t[i][0] = 0;
	    
	    for(int j=1;j<V+1;j++)
	    t[0][j] = INT_MAX-1;
	    
	    for(int i=1;i<n+1;i++)
	    {
	        for(int j=1;j<V+1;j++)
	        {
	            if(c[i-1]<=j)
	            t[i][j] = min(1+t[i][j-c[i-1]],t[i-1][j]);
	            
	            else
	            t[i][j] = t[i-1][j];
	            
	        }
	    }
	   
	    int ans;
	    t[n][V] == INT_MAX-1 ? ans = -1 : ans = t[n][V];
	    return ans;
	} 
};