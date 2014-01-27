/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose : Recursion is easy, here is an iterative one
* Creation Date : 26-01-2014
* Last Modified : Sun Jan 26 20:23:49 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<string> letterCombinations(string digits) {
        map<int,string> dict;
        dict[0]=" ";
        dict[1]="";
        dict[2]="abc";
        dict[3]="def";
        dict[4]="ghi";
        dict[5]="jkl";
        dict[6]="mno";
        dict[7]="pqrs";
        dict[8]="tuv";
        dict[9]="wxyz";
        vector<string> res;
        res.push_back("");
        for (int i = 0; i < digits.length(); ++ i)
        {
            if(digits[i]>'9'||digits[i]<'0')continue;
            vector<string> tmp = res;
            res.clear();
            string cand = dict[digits[i]-'0'];
            for(int j = 0; j < tmp.size(); ++ j)
                for(int k = 0; k < cand.length(); ++ k)
                    res.push_back(tmp[j]+cand[k]);
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
