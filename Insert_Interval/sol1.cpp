/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Insert_Interval.cpp
* Purpose :
* Creation Date : 08-01-2014
* Last Modified : Wed Jan  8 13:06:38 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
        vector<Interval> res;
        int start_idx = 0;
        while(start_idx < intervals.size() && intervals[start_idx].end < newInterval.start)
            res.push_back(intervals[start_idx++]);
        if(start_idx == intervals.size()){
            res.push_back(newInterval);
            return res;
        }
        int end_idx = start_idx;
        while(end_idx < intervals.size() && intervals[end_idx].start <= newInterval.end) end_idx ++;
        if(end_idx == 0)
            res.push_back(newInterval);
        else
            res.push_back(Interval(min(newInterval.start, intervals[start_idx].start), max(newInterval.end, intervals[end_idx - 1].end)));
        while(end_idx < intervals.size())
            res.push_back(intervals[end_idx++]);
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
