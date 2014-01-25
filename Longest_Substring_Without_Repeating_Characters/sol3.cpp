/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol3.cpp
* Purpose : refined code
* Creation Date : 25-01-2014
* Last Modified : Sat Jan 25 18:26:51 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int lengthOfLongestSubstring(string s) {
        map<char, int> mp;
        int res = 0, start = 0, len;
        for(int i = 0; i < s.length() + 1; ++ i){
            len = i - start;
            if(i == s.length()) break;
            map<char, int>::iterator itr = mp.find(s[i]);
            if(itr != mp.end()){
                if(itr->second >= start){
                    if(len > res)res = len;
                    start = itr->second + 1;
                }
                itr->second = i;
            }else
                mp[s[i]] = i;
        }
        if(len > res) res = len;
    	return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
