/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Restore_IP_Addresses.cpp
* Purpose :
* Creation Date : 17-01-2014
* Last Modified : Fri Jan 17 21:05:38 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void dfs(vector<string> &cand, string sol, string &s, int seg, int start){
        if(!seg) {
            cand.push_back(sol.substr(0,sol.length()-1));
            return;
        }
        else if(start+3*seg < s.length() || start == s.length()) return;
        else if(seg == 1){
            string sub = s.substr(start);
            if(sub.length() > 1 && sub[0] == '0') return;
            int num = atoi(sub.c_str());
            if(num>=0 && num < 256)
                dfs(cand, sol+sub+".", s, 0, s.length());
            else
                return;
        }
        else{
            string tmp;
            for(int i = start; i < start + 3 && i< s.length(); ++ i){
                tmp += s[i];
                int num = atoi(tmp.c_str());
                if(num>=0 && num < 256)
                    dfs(cand, sol+tmp+".", s, seg-1, i+1);
                if(tmp == "0") break;
            }
        }
    }
    vector<string> restoreIpAddresses(string s) {
        vector<string> res;
        string sol;
        dfs(res, sol, s, 4, 0);
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
