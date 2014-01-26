/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Longest_Palindromic_Substring.cpp
* Purpose : Refine code, O(n^2) time, O(1) space
* Creation Date : 17-12-2013
* Last Modified : Sat Jan 25 19:45:46 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int gen_pal(string s, int start, int end){
        int res = 0;
        while(start >= 0&&end < s.length()&&s[start] == s[end]){
            start --;
            end ++;
            res ++;
        }
        return res;
    }
    string longestPalindrome(string s) {
        int maxl = 0;
        string res;
        for(int i = 0; i < s.length(); ++ i){
            int l1 = gen_pal(s, i, i);
            if(2*l1 - 1 > maxl){
                maxl = 2*l1 - 1;
                res = s.substr(i-l1+1, maxl);
            }
            int l2 = gen_pal(s, i-1, i);
            if(2*l2 > maxl){
                maxl = 2*l2;
                res = s.substr(i-l2, maxl);
            }
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	cout << longestPalindrome("bb") << endl;
	return 0;
}
