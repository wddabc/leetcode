/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Max_Points_on_a_Line.cpp
* Purpose :
* Creation Date : 23-01-2014
* Last Modified : Thu Jan 23 11:58:16 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int maxPoints(vector<Point> &points) {
        int len = points.size(), res = 1;
        if(!len) return 0;
        for(int i = 0; i < len; ++ i){
            unordered_map<double, int> mp;
            int same_x = 0, same_point = 1;
            for(int j = 0; j < len; ++ j){
                if(j == i) continue;
                double xdiff = (double)points[j].x-points[i].x;
                double ydiff = (double)points[j].y-points[i].y;
                if(xdiff == 0 && ydiff == 0)
                    same_point ++;
                else if(xdiff == 0) 
                    same_x++;
                else 
                    mp[ydiff/xdiff]++;
            }
            for(unordered_map<double, int>::iterator itr = mp.begin(); itr != mp.end(); ++ itr)
                if(itr->second+same_point > res) res = itr->second+same_point;
            if(same_x+same_point > res) res = same_x+same_point;
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
