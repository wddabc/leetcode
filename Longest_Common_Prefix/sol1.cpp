/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose : AC on first try, simple one. Nothing to say
* Creation Date : 26-01-2014
* Last Modified : Sun Jan 26 19:43:41 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    string longestCommonPrefix(vector<string> &strs) {
        int min_length = INT_MAX;
        if(!strs.size()) return "";
        for (int i = 0; i < strs.size(); ++ i){
            if(strs[i].length() < min_length)min_length = strs[i].length();
        }
        string res = "";
        for (int i = 0; i < min_length; ++ i){
            char cur_char = strs[0][i];
            bool flag = true;
            for(int j = 1; j < strs.size(); ++ j){
                if(strs[j][i] != cur_char){
                    flag = false;
                    break;
                }
            }
            if(!flag) break;
            res += cur_char;
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
