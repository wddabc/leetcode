/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Longest_Palindromic_Substring.cpp
* Purpose :
* Creation Date : 17-12-2013
* Last Modified : Tue Dec 17 13:30:03 2013
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
pair<int, string> checkpalOdd(string s, int idx){
    int res = 1, offset = 1;
    while(1){
        if(idx<offset||(idx+offset)>=s.length())break;
        if(s[idx - offset] == s[idx + offset]){
            offset ++;
            res += 2;
        }
        else break;
    }
    return make_pair(res, s.substr(idx-offset + 1, res));
}
pair<int, string> checkpalEve(string s, int idx){
    int res = 0, offset = 0;
    while(1){
        if(idx<offset||(idx+offset+1)>=s.length())break;
        if(s[idx - offset] == s[idx + offset+1]){
            offset ++;
            res += 2;
        }
        else break;
    }
    return make_pair(res, s.substr(idx-offset + 1, res));
}
string longestPalindrome(string s) {
    int maxlen = 0;
    string res;
    for(int i =0 ; i < s.length(); ++ i){
        pair<int, string> po = checkpalOdd(s, i);
        pair<int, string> pe = checkpalEve(s, i);
        int tmplen = max(po.first, pe.first);
        string sub = tmplen&0x1?po.second:pe.second;
        if(tmplen > maxlen){
            maxlen = tmplen;
            res = sub;
        }
    }
    return res;
}
int main(int argc, const char* argv[])
{
	return 0;
}
