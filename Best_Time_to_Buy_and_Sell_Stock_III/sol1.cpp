/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Best_Time_to_Buy_and_Sell_Stock_III.cpp
* Purpose :
* Creation Date : 20-01-2014
* Last Modified : Tue Feb  4 23:33:51 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int maxProfit(vector<int> &prices) {
        vector<int> dpl;// dpl[i] is the max profit ends in i
        int min_price = INT_MAX, max_prof = 0;
        for(int i = 0; i < prices.size(); ++ i){
            if(prices[i] < min_price) min_price = prices[i];
            if(prices[i] - min_price > max_prof) max_prof = prices[i] - min_price;
            dpl.push_back(max_prof);
        }
        vector<int> dpr;// dpr = [i] is the max pro fit starts in i
        int max_price = 0;
        max_prof = 0;
        for(int i = prices.size()-1; i >= 0; -- i){
            if(prices[i] > max_price) max_price = prices[i];
            if(max_price-prices[i] > max_prof) max_prof = max_price-prices[i];
            dpr.insert(dpr.begin(), max_prof);
        }
        int res = 0;
        for(int i = 0; i < prices.size(); ++ i)
            if(dpl[i]+dpr[i] > res) res = dpl[i] + dpr[i];
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
