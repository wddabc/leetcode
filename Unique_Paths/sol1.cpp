/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Unique_Paths.cpp
* Purpose :
* Creation Date : 08-01-2014
* Last Modified : Wed Jan  8 17:59:49 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int uniquePaths(int m, int n) {
        vector<int> dp(m, 1);
        for(int i = 1; i < n; ++ i){
            for(int j = 1; j < m; ++ j){
                dp[j] += dp[j-1];
            }
        }
        return dp[m-1];
    }
int main(int argc, const char* argv[])
{
	return 0;
}
