/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Largest_Rectangle_in_Histogram.cpp
* Purpose : AC on first attempt
* Creation Date : 14-01-2014
* Last Modified : Sun Feb  2 22:19:36 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int largestRectangleArea(vector<int> &height) {
        stack<pair<int, int> > sta; // sta is for recording the height and idx
        int res = 0;
        height.push_back(0);
        for(int i = 0; i < height.size(); ++ i){
            int hi = height[i];
            if(sta.empty() || hi > sta.top().second)// for increasing order, just push
                sta.push(make_pair(i, hi));
            else{
                int new_idx = i;// search back, until the height is less than the current col
                while(!sta.empty()){
                    pair<int, int> cur = sta.top();
                    int idx = cur.first, h = cur.second;
                    if(h < hi) break;
                    new_idx = idx;
                    sta.pop();
                    res = max(res, h*(i-idx)); // calc the area of the current col
                }
                sta.push(make_pair(new_idx, hi));//push the height
            }
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
