/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Longest_Valid_Parentheses.cpp
* Purpose : DP solution
* Creation Date : 05-01-2014
* Last Modified : Tue Jan 28 22:32:25 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int longestValidParentheses(string s) {
        int *dp = new int[s.length()], maxP = 0; // dp[i] is the longest valid parenthese end at i
        for(int i = 0; i < s.length(); ++ i)dp[i] = 0;
        for(int i = 1; i < s.length(); ++ i){
            if (s[i] == ')'){
                int j = i-dp[i - 1] - 1;// j is position before the k, where k and i-1 forms the longest valid parenthese for i-1
                if(j >= 0&&s[j] == '('){// i and j wrap the i-1 and j+1
                    dp[i] = dp[i-1] + 2;// so add 2 here
                    if (j - 1 >= 0)
                        dp[i] += dp[j - 1];// then append the longest parenthese before j
                }
            }
            maxP = max(maxP, dp[i]);
        }
        return maxP;
    }
int main(int argc, const char* argv[])
{
	cout << longestValidParentheses("()") << endl;
	return 0;
}
