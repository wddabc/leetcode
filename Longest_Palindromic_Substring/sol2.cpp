/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol2.cpp
* Purpose : O(n) solution: Manacher's Algorithm
* Creation Date : 25-01-2014
* Last Modified : Sun Jan 26 02:51:20 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
    string transform(string s){
        string res = "";
        for(int i = 0; i < s.size(); ++ i){
            res += "#";
            res += s[i];
        }
        res += "#";
        return res;
    }
    string longestPalindrome(string s) {
        s = transform(s);
        int mid = 0, scope = 0; //mid is the current center, scope is its coverage based on the center
        vector<int> len(s.length(), 0);
        for(int i = 0; i < s.length(); ++ i){
            len[i] = scope > i? min(len[2*mid-i], scope-i+1):1; //logic as below
//            int j = 2*mid - i;
//            if(scope <= i) len[i] = 1; if it is outside the covered area, set to 1 for checking
//            else if(i + len[j] < scope) len[i] = len[j]; if it is inside the covered area, set to is mirror
//            else len[i] = scope - i + 1; in between, it has at least scope - i + 1 length, set to it for checking
            while(i+len[i] < s.length() && i-len[i] >= 0 && s[i+len[i]] == s[i-len[i]]) // checking and updating
                len[i] ++;
            if(i + len[i] - 1 > scope){ //update the scope
                scope = i + len[i] - 1;
                mid = i;
            }
        }
        int maxl = 0;
        string res_1;
        for(int i = 0; i < len.size(); ++ i)
            if(len[i] > maxl){
                maxl = len[i];
                res_1 = s.substr(i-len[i] + 1, 2*len[i] - 1);
            }
        string res = "";
        for(int i = 0; i < res_1.length(); ++ i)
            if(res_1[i] != '#') res += res_1[i];
        return res;
    }
int main(int argc, const char* argv[])
{
	cout << longestPalindrome("bb") << endl;
	return 0;
}
