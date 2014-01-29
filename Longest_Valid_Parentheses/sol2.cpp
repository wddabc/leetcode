/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol2.cpp
* Purpose : Stack solution
* Creation Date : 28-01-2014
* Last Modified : Tue Jan 28 22:04:48 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int longestValidParentheses(string s) {
        vector<pair<char, int>> sta; //sta is to record the symbol and its index
        int maxP = 0;
        for (int i = 0; i < s.length(); ++ i){
            char cur = s[i];
            if(cur == '(') sta.push_back(make_pair(cur, i));// if '(', just push
            else{
                if(!sta.empty() && sta.back().first == '('){// a valid parentheses formed
                    sta.pop_back();
                    maxP = max(maxP, i-(sta.empty()?-1:sta.back().second));// if sta is empty, the full string matches and the length is the current idx
                }
                else
                    sta.push_back(make_pair(cur, i));
            }
        }
        return maxP;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
