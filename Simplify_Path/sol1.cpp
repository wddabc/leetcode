/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Simplify_Path.cpp
* Purpose :
* Creation Date : 09-01-2014
* Last Modified : Thu Jan  9 01:25:25 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
#include <stack>
    string simplifyPath(string path) {
        stack<string> sta;
        vector<string> cand;
        char *strc = strdup(path.c_str()), *pch = strtok(strc, "/");
        while(pch){
            cand.push_back(pch);
            pch = strtok(NULL, "/");
        }
        for(int i = 0; i < cand.size(); ++ i){
            if(cand[i] == ".") continue;
            else if(cand[i] == "..") {
                if(!sta.empty())sta.pop();
            }
            else if(cand[i].length())sta.push(cand[i]);
        }
        string res = "";
        if(sta.empty()) return "/";
        while(!sta.empty()){
            res = '/' + sta.top() + res;
            sta.pop();
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
