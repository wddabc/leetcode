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
            char tmp;
            int cnt = 0;
            stringstream ss;
            for(int j = 0; j < res.length(); ++ j){
                if (j == 0) tmp = res[j];
                if(res[j] == tmp) cnt ++;
                else{
                    ss << cnt << tmp;
                    tmp = res[j];
                    cnt = 1;
                }
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
