/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Pascal_s_Triangle.cpp
* Purpose :
* Creation Date : 19-01-2014
* Last Modified : Tue Feb  4 22:47:40 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> >res;
        if(!numRows) return res;
        res.push_back(vector<int>(1,1));
        for(int i = 1; i < numRows; ++ i){
            vector<int> &prev_row = res.back();
            vector<int> new_row;
            int prev = 0; // push the first element
            for(int j = 0; j < prev_row.size(); ++ j){
                new_row.push_back(prev_row[j] + prev);
                prev = prev_row[j];
            }
            new_row.push_back(prev_row.back());// push the last element
            res.push_back(new_row);
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
