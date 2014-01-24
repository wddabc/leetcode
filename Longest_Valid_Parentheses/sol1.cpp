/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Longest_Valid_Parentheses.cpp
* Purpose :
* Creation Date : 05-01-2014
* Last Modified : Sun Jan  5 01:36:44 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int longestValidParentheses(string s) {
        vector<pair<char, int> > sta;
        int maxP = 0;
        for (int i = 0; i < s.length(); ++ i){
            char cur = s[i];
            if(cur == '(') sta.push_back(make_pair(cur, i));
            else{
                if(!sta.empty() && sta.back().first == '('){
                    sta.pop_back();
                    maxP = max(maxP, i-(sta.empty()?-1:sta.back().second));
                }
                else
                    sta.push_back(make_pair(cur, i));
            }
        }
        return maxP;
    }
    int longestValidParentheses(string s) {
        int *dp = new int[s.length()], maxP = 0;
        for(int i = 0; i < s.length(); ++ i)dp[i] = 0;
        for(int i = 0; i < s.length(); ++ i){
            if (s[i] == ')'){
                int j = i-dp[i - 1] - 1;
                if(j >= 0&&s[j] == '('){
                    dp[i] = dp[i-1] + 2;
                    if (j - 1 >= 0)
                        dp[i] += dp[j - 1];
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
