/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Best_Time_to_Buy_and_Sell_Stock_II.cpp
* Purpose :
* Creation Date : 20-01-2014
* Last Modified : Mon Jan 20 00:41:55 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int maxProfit(vector<int> &prices) {
        int tt = 0;
        for(int i = 1; i < prices.size(); ++ i){
            if(prices[i] > prices[i-1])
                tt += (prices[i] - prices[i-1]);
        }
        return tt;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
