/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Unique_Paths_II.cpp
* Purpose :
* Creation Date : 08-01-2014
* Last Modified : Wed Jan  8 18:28:50 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
        int n = obstacleGrid.size(), m = obstacleGrid[0].size();
        vector<int> dp(m, 1);
        dp[0] *= (1 - obstacleGrid[0][0]);
        for(int i = 1; i < m; ++ i)
            if(obstacleGrid[0][i]) dp[i] = 0;
            else dp[i] = dp[i-1];
        for(int i = 1; i < n; ++ i){
            dp[0] *= (1-obstacleGrid[i][0]);
            for(int j = 1; j < m; ++ j)
                if(obstacleGrid[i][j]) dp[j] = 0;
                else dp[j] += dp[j-1];
        }
        return dp[m - 1];
    }
int main(int argc, const char* argv[])
{
	return 0;
}
