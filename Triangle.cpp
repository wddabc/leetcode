/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Triangle.cpp
* Purpose :
* Creation Date : 20-01-2014
* Last Modified : Mon Jan 20 00:10:04 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int minimumTotal(vector<vector<int> > &triangle) {
        if(!triangle.size()) return 0;
        vector<int> dp(1,triangle[0][0]);
        for(int i = 1; i < triangle.size(); ++ i){
            vector<int> tmp= triangle[i];
            for(int j = 0; j < tmp.size(); ++ j){
                int l = INT_MAX, r = INT_MAX;
                if(j > 0)l = dp[j-1];
                if(j < dp.size())r = dp[j];
                tmp[j] += min(l,r);
            }
            dp = tmp;
        }
        int res = INT_MAX;
        for(int i = 0; i < dp.size(); ++ i)
            if(dp[i] < res) res = dp[i];
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
