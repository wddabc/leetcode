/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 31-01-2014
* Last Modified : Fri Jan 31 14:47:35 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    string countAndSay(int n) {
        string res = "1";
        for(int i = 1; i < n; ++ i){
            stringstream ss;
            char tmp = res[0];
            int cnt = 1;
            for(int j = 1; j < res.length(); ++ j){
                if(res[j] != tmp){
                    ss << cnt << tmp;
                    cnt = 1;
                    tmp = res[j];
                }
                else cnt++;
            }
            ss << cnt << tmp;
            res = ss.str();
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
