/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Gas_Station.cpp
* Purpose :
* Creation Date : 21-01-2014
* Last Modified : Tue Jan 21 22:13:26 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
        int rem = 0, res = 0, def = 0;
        for(int i = 0; i < gas.size(); ++ i){
            if(rem < 0){
                def +=rem;
                rem = 0;
                res = i;
            }
            rem += gas[i]-cost[i];
        }
        if(rem + def >= 0) return res;
        return -1;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
