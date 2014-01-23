/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Decode_Ways.cpp
* Purpose :
* Creation Date : 17-01-2014
* Last Modified : Fri Jan 17 01:19:23 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int numDecodings(string s) {
        int len = s.length();
        if(!len) return 0;
        vector<int> dp(len,0);
        dp[0] = s[0]=='0'?0:1;
        for(int i = 1; i < len; ++ i){
            if(s[i] != '0' || s[i-1] == '1' || s[i-1] == '2'){
                if(s[i] != '0')
                    dp[i] = dp[i-1];
                if(s[i-1]=='1'||(s[i-1]=='2'&&s[i]<'7'))
                    dp[i] += i>1?dp[i-2]:1;
            }
            else
                return 0;
        }
        return dp[len-1];
    }
int main(int argc, const char* argv[])
{
	return 0;
}
