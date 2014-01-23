/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Merge_Intervals.cpp
* Purpose :
* Creation Date : 08-01-2014
* Last Modified : Wed Jan  8 11:32:38 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    struct comp{
        bool operator()(const Interval &i1, const Interval &i2){
            return i1.start < i2.start;
        }  
    };
    vector<Interval> merge(vector<Interval> &intervals) {
        vector<Interval> res;
        if(!intervals.size()) return res;
        sort(intervals.begin(), intervals.end(), comp());
        int start = intervals[0].start, end = intervals[0].end;
        for(int i = 1; i< intervals.size(); ++ i){
            int cs = intervals[i].start, ce = intervals[i].end;
            if(cs <= end) end = max(end, ce);
            else {
                res.push_back(Interval(start, end));
                start = cs;
                end = ce;
            }
        }
        res.push_back(Interval(start, end));
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
