/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Substring_with_Concatenation_of_All_Words.cpp
* Purpose :
* Creation Date : 04-01-2014
* Last Modified : Sat Jan  4 22:05:04 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<int> findSubstring(string S, vector<string> &L) {
        map<string, int> gdict;
        for(int i = 0; i < L.size(); ++ i) gdict[L[i]]++;
        int terml = L[0].length(), alll = terml*L.size();
        vector<int> res;
        for(int i = 0; i < (int)S.length()-alll+1; i ++){
            string head = S.substr(i, terml);
            if(gdict[head]){
                bool flag = true;
                map<string, int> ldict;
                for(int j = i; j < i + alll; j += terml){
                    string cur = S.substr(j, terml);
                    ldict[cur]++;
                    if(!gdict[cur] || ldict[cur] > gdict[cur]){
                        flag = false;
                        break;
                    }
                }
                if(flag)res.push_back(i);
            }
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	vector<string> l;
	l.push_back("foo");
	l.push_back("bar");
	findSubstring("barfoothefoobarman", l);
	return 0;
}
