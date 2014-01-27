/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol2.cpp
* Purpose : DP approach
* Creation Date : 26-01-2014
* Last Modified : Sun Jan 26 19:07:18 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
    bool isMatch(const char *s, const char *p) {
        int m = strlen(s), n = strlen(p);
        vector<vector<bool> > dp(m+1, vector<bool>(n+1, false));
        dp[0][0] = true;//start symbol matches
        for(int j = 1; j < n+1; ++ j)
            if(p[j-1] == '*') dp[0][j] = dp[0][j-2];// pairs like "a*" can match to none
        for(int i = 1; i < m+1; ++ i)
            for(int j = 1; j < n+1; ++ j){
                if(s[i-1] == p[j-1] || p[j-1] == '.') // exact match
                    dp[i][j] = dp[i-1][j-1];
                else if(p[j-1] == '*'){
                    if(p[j-2] == s[i-1] || p[j-2] == '.')
                        dp[i][j] = dp[i-1][j]; // "*" eating charactors
                    dp[i][j] = dp[i][j]||dp[i][j-2];// pairs like "a*" can match to none
                }
                else dp[i][j] = false;
            }
        return dp[m][n];
    }
int main(int argc, const char* argv[])
{
	cout << isMatch("aaa", "ab*a*c*a") << endl;
	return 0;
}
