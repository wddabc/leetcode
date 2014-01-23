/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Largest_Rectangle_in_Histogram.cpp
* Purpose :
* Creation Date : 14-01-2014
* Last Modified : Tue Jan 14 16:30:33 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int largestRectangleArea(vector<int> &height) {
        stack<pair<int, int> > sta;
        int res = 0;
        height.push_back(0);
        for(int i = 0; i < height.size(); ++ i){
            int hi = height[i];
            if(sta.empty() || hi > sta.top().second)
                sta.push(make_pair(i, hi));
            else{
                int new_idx = i;
                while(!sta.empty()){
                    pair<int, int> cur = sta.top();
                    int idx = cur.first, h = cur.second;
                    if(h < hi) break;
                    new_idx = idx;
                    sta.pop();
                    res = max(res, h*(i-idx));
                }
                sta.push(make_pair(new_idx, hi));
            }
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
