/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Word_Break.cpp
* Purpose :
* Creation Date : 22-01-2014
* Last Modified : Wed Feb  5 15:33:26 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    bool wordBreak(string s, unordered_set<string> &dict) {
        int l = s.length(), maxl = 0;
        if(!l&&!dict.size()) return true;
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
        return dp[l];
    }
int main(int argc, const char* argv[])
{
	return 0;
}
