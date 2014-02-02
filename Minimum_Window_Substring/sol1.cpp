/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Minimum_Window_Substring.cpp
* Purpose :
* Creation Date : 09-01-2014
* Last Modified : Sun Feb  2 15:13:05 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    string minWindow(string S, string T) {
        map<char, int> dict, cur;// dict: term->freq map for T, cur: term->freq for current scan
        for(int i = 0; i < T.length(); ++ i) dict[T[i]] ++;// set up the dict
        int slen = S.length(), tlen = T.length(), cnt = 0, minl = INT_MAX, sptr = 0, eptr = 0;
        string res = "";
        while(eptr < slen){
            while(cnt < tlen){ // expending the end
                if(eptr == slen) return res;// reach the end
                char c = S[eptr++];
                map<char, int>::iterator itrd = dict.find(c);
                if(itrd != dict.end()){// c is in the T
                    map<char, int>::iterator itrc = cur.find(c); // chect cur
                    if(itrc == cur.end()){
						cur[c] = 1;
						cnt ++;
					}
                    else {
                        if(itrc->second < itrd->second) cnt ++;
                        itrc->second ++;
                    }
                }
            }
            while(cnt == tlen){ // smalling the start
                char c = S[sptr++];
                map<char, int>::iterator itrd = dict.find(c);
                if(itrd != dict.end()){
                    map<char, int>::iterator itrc = cur.find(c);
                    itrc->second --;
                    if(itrc->second < itrd->second) cnt --;
                }
            }
            int len = eptr-sptr+1;
            if(len < minl){
                minl = len;
                res = S.substr(sptr-1, len);
            }
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	cout << minWindow("ADOBECODEBANC", "ABC") << endl; 
	return 0;
}
