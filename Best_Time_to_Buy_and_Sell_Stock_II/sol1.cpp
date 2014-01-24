/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Best_Time_to_Buy_and_Sell_Stock_II.cpp
* Purpose :
* Creation Date : 20-01-2014
* Last Modified : Mon Jan 20 00:41:55 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int maxProfit(vector<int> &prices) {
        int tt = 0, min_price = INT_MAX;
        prices.push_back(0);
        for(int i = 0; i < prices.size()-1; ++ i){
            if(prices[i] < min_price) min_price = prices[i];
            if(prices[i] > min_price && prices[i+1] < prices[i]){
                tt += prices[i]-min_price;
                min_price = INT_MAX;
            }
        }
        return tt;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
