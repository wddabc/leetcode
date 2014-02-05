/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Gas_Station.cpp
* Purpose :
* Creation Date : 21-01-2014
* Last Modified : Wed Feb  5 12:42:34 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
        int rem = 0/*the remaining gas*/, res = 0, def = 0/*at least how much gas needed from start to the current place*/;
        for(int i = 0; i < gas.size(); ++ i){
            if(rem < 0){// cannot reach
                def +=rem; // more gas is needed from start to here
                rem = 0;// try start here
                res = i;// the current index
            }
            rem += gas[i]-cost[i];// current remain
        }
        if(rem + def >= 0) return res; // the remaining is larger
        return -1;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
