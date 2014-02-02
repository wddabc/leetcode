/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol2.cpp
* Purpose :
* Creation Date : 01-02-2014
* Last Modified : Sat Feb  1 01:12:21 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
        vector<Interval> res;
        int s = newInterval.start, e = newInterval.end;
        for(vector<Interval>::iterator itr = intervals.begin(); itr != intervals.end(); ++ itr){
            if(itr->start > e){
                res.push_back(Interval(s, e));
                res.insert(res.end(), itr, intervals.end());
                return res;
            }
            else if(itr->end < s)
                res.push_back(*itr);
            else{
                s = min(s, itr->start);
                e = max(e, itr->end);
            }        
        }
        res.push_back(Interval(s, e));
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
