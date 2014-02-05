/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Palindrome_Partitioning_II.cpp
* Purpose :
* Creation Date : 21-01-2014
* Last Modified : Tue Jan 21 20:47:37 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
int minCut(string s) {
        int l = s.length();
        vector<vector<bool> > val(l, vector<bool>(l, false));
        vector<int> dp(l+1, -1);
        for(int i = 1; i < l+1; ++ i){
            int tmp = INT_MAX;
            for(int j = 1; j <= i; ++ j)
                if(s[i-1] == s[j-1] && (i < j+3 || val[j][i-2])){
                    if(dp[j-1] + 1 < tmp)
                        tmp = dp[j-1]+1;
                    val[j-1][i-1] = true;
                }
            dp[i] = tmp;
        }
        return dp[l];
    }
int main(int argc, const char* argv[])
{
	cout << minCut("fff") << endl; 
	return 0;
}
