/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Generate_Parentheses.cpp
* Purpose :
* Creation Date : 04-01-2014
* Last Modified : Sat Jan  4 10:55:04 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<string> generateParenthesis(int n) {
        vector<set<string>> res_s;
        set<string> first_s;
        first_s.insert("");
        res_s.push_back(first_s);
        for(int i = 1; i <= n; ++ i){
            set<string> tmp_s;
            for(set<string>::iterator itr = res_s[i-1].begin(); itr != res_s[i-1].end(); ++ itr)
                tmp_s.insert("(" + *itr + ")");
            for (int j = 1; j < i; ++ j){
                for (set<string>::iterator itr1 = res_s[j].begin(); itr1 != res_s[j].end(); ++ itr1)
                    for (set<string>::iterator itr2 = res_s[i-j].begin(); itr2 != res_s[i-j].end(); ++ itr2)
                        tmp_s.insert(*itr1+*itr2);
            }
            res_s.push_back(tmp_s);
        }
        vector<string> res;
        for(set<string>::iterator itr = res_s[n].begin(); itr != res_s[n].end(); ++ itr)
            res.push_back(*itr);
        return res;
    }
    void gp(string str, int l, int r, vector<string> &v, int n){
        if (l == n && r == n){
            v.push_back(str);
            return;
        }
        if (l < n)
            gp(str+'(', l + 1, r, v, n);
        if (r < l)
            gp(str+')', l, r + 1, v, n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        gp("", 0, 0, res, n);
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
