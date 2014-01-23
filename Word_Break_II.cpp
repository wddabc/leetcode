/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Word_Break_II.cpp
* Purpose :
* Creation Date : 22-01-2014
* Last Modified : Wed Jan 22 14:33:43 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void dfs(vector<string> &cand, string sol, string s, unordered_set<string> &dict, int start, int maxl, vector<bool> &dp){
        if(start == s.length()){
            cand.push_back(sol.substr(0, sol.length()-1));
            return;
        }
        for(int i = start; i < maxl + start && i < s.length(); ++ i){
            if(!dp[i+1]) continue;
            string sub = s.substr(start, i-start+1);
            if(dict.find(sub) != dict.end())
                dfs(cand, sol+sub+" ", s, dict, i+1, maxl, dp);
        }
    }
    vector<string> wordBreak(string s, unordered_set<string> &dict) {
        int l = s.length(), maxl = 0;
        for(unordered_set<string>::iterator itr = dict.begin(); itr != dict.end(); ++ itr)
            if(itr->length() > maxl) maxl = itr->length();
        vector<bool> dp(l+1, false);
        dp[0] = true;
        for(int i = 1; i < l+1; ++ i){
            for(int j = i-1; j >= 0 && j >= (i-maxl); -- j)
                if(dict.find(s.substr(j, i-j))!=dict.end()&&dp[j]){
                    dp[i] = true;
                    break;
                }
        }
        string sol = "";
        vector<string> res;
        if(!dp[l]) return res;
        dfs(res, sol, s, dict, 0, maxl, dp);
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
