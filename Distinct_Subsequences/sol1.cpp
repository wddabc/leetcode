/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Distinct_Subsequences.cpp
* Purpose :
* Creation Date : 19-01-2014
* Last Modified : Sun Jan 19 19:44:19 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int numDistinct(string S, string T) {
        int m = S.length(), n = T.length();
        if(n > m) return 0;
        vector<vector<int> >dp(m+1, vector<int>(n+1, 0));
        for(int i = 0; i < m+1; ++ i) dp[i][0] = 1;
        for(int i = 1; i < m+1; ++ i)
            for(int j = 1; j < i+1 && j < n+1; ++ j){
                dp[i][j] = dp[i-1][j];
                if(S[i-1] == T[j-1]) 
                    dp[i][j] += dp[i-1][j-1];
            }
        return dp[m][n];
    }
int main(int argc, const char* argv[])
{
	return 0;
}
