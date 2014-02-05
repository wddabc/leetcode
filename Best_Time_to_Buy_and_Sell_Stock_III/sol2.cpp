/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol2.cpp
* Purpose : A shorter version, less extra space
* Creation Date : 04-02-2014
* Last Modified : Tue Feb  4 23:49:34 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int maxProfit(vector<int> &prices) {
        int res = 0, n = prices.size(), mx = 0, mxp = 0;
        vector<int> pr(n, 0);
        for(int i = n-1; i >= 0; -- i){
            if(prices[i] > mx) mx = prices[i];
            if(mx-prices[i] > mxp)
                mxp = mx-prices[i];
            pr[i] = mxp;
        }
        int mn = INT_MAX;
        for(int i = 0; i < n; ++ i){
            if(prices[i] < mn) mn = prices[i];
            if(prices[i] - mn + pr[i] > res)
                res = prices[i] - mn + pr[i];
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
