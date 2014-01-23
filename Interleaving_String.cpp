/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Interleaving_String.cpp
* Purpose :
* Creation Date : 18-01-2014
* Last Modified : Sat Jan 18 17:51:27 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    bool isInterleave(string s1, string s2, string s3) {
        int l1 = s1.length(), l2 = s2.length(), l3 = s3.length();
        if((l1 + l2) != l3) return false;
        vector<vector<bool> >dp(l1+1, vector<bool>(l2+1, false));
        dp[0][0] = true;
        for(int i = 1; i < l1 + 1; ++ i)
            dp[i][0] = dp[i-1][0] && s1[i-1] == s3[i-1];
        for(int i = 1; i < l2 + 1; ++ i)
            dp[0][i] = dp[0][i-1] && s2[i-1] == s3[i-1];
        for(int i = 1; i < l1+1; ++ i)
            for(int j = 1; j < l2+1; ++ j)
			{
				cout << s1[i-1] << " " << s2[j-1] << " " << s3[i+j] << endl;
                dp[i][j] = (dp[i-1][j]&&s1[i-1]==s3[i+j-1])||(dp[i][j-1]&&s2[j-1]==s3[i+j-1]);
			}
        for(int i = 0; i < l1+1; ++ i)
		{
            for(int j = 0; j < l2+1; ++ j)
			  cout << dp[i][j] << " ";
			cout << endl;
		}
        return dp[l1][l2];
    }
int main(int argc, const char* argv[])
{
	cout << isInterleave("a", "b" , "ab") << endl;
	return 0;
}
