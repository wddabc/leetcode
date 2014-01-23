/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Minimum_Path_Sum.cpp
* Purpose :
* Creation Date : 08-01-2014
* Last Modified : Wed Jan  8 18:52:56 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int minPathSum(vector<vector<int> > &grid) {
        int n = grid.size(), m = grid[0].size();
        vector<int> dp = grid[0];
        for(int i = 1; i < m; ++ i) dp[i] += dp[i - 1];
        for(int i = 1; i < n; ++ i){
            dp[0] += grid[i][0];
            for(int j = 1; j < m; ++ j){
                dp[j] = min(dp[j-1], dp[j]);
                dp[j] += grid[i][j];
            }
        }
        return dp[m - 1];
    }
int main(int argc, const char* argv[])
{
	return 0;
}
