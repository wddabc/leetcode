/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 04-02-2014
* Last Modified : Tue Feb  4 16:12:13 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int numTrees(int n) {
        vector<int> dp(n+1, 0);
        dp[0] = 1;
        for(int i = 0; i <= n; ++ i)
            for(int j = 0; j < i; ++ j)
                dp[i] += dp[j]*dp[i-j-1];
        return dp[n];
    }
int main(int argc, const char* argv[])
{
	return 0;
}
