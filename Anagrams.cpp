/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Anagrams.cpp
* Purpose :
* Creation Date : 07-01-2014
* Last Modified : Tue Jan  7 17:16:48 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<string> anagrams(vector<string> &strs) {
        vector<string> res;
        map<string, int> visited;
        for(int i = 0; i < strs.size(); ++i){
            string s = strs[i];
            sort(s.begin(), s.end());
            map<string, int>::iterator itr = visited.find(s);
            if(itr == visited.end())
                visited[s] = i;
            else if(itr->second != -1){
                res.push_back(strs[itr->second]);
                res.push_back(strs[i]);
                visited[s] = -1;
            } else
                res.push_back(strs[i]);
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
