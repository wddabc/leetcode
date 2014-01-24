/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Pascal_s_Triangle_II.cpp
* Purpose :
* Creation Date : 19-01-2014
* Last Modified : Sun Jan 19 23:35:32 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<int> getRow(int rowIndex) {
        vector<int> res(1,1);
        if(!rowIndex) return res;
        for(int i = 0; i < rowIndex; ++ i){
            vector<int> tmp;
            int prev = 0;
            for(int j = 0; j < res.size(); ++ j){
                tmp.push_back(res[j] + prev);
                prev = res[j];
            }
            tmp.push_back(res.back());
            res = tmp;
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
