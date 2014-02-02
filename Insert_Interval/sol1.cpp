/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Insert_Interval.cpp
* Purpose :
* Creation Date : 08-01-2014
* Last Modified : Fri Jan 31 23:36:18 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
        vector<Interval> res;
        if(intervals.empty()){
            res.push_back(newInterval);
            return res;
        }
        int idx = 0, s = newInterval.start, e = newInterval.end;
        for(idx = 0; idx < intervals.size() && intervals[idx].end < s; ++ idx)
            res.push_back(intervals[idx]);
        if(idx < intervals.size() && intervals[idx].end >= s)
            s = min(intervals[idx].start, s);
        while(idx < intervals.size() && intervals[idx].start <= e)
            ++ idx;
        if (idx > 0)
            e = max(intervals[idx-1].end, e);
        res.push_back(Interval(s,e));
        while(idx < intervals.size())
            res.push_back(intervals[idx++]);
        return res;
    }
int main(int argc, const char* argv[])
{
	vector<Interval> intervals;
	intervals.push_back(Interval(1,5));
	insert(intervals, Interval(6, 8));
	return 0;
}
