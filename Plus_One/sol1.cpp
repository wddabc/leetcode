/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Plus_One.cpp
* Purpose :
* Creation Date : 08-01-2014
* Last Modified : Wed Jan  8 21:51:42 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<int> plusOne(vector<int> &digits) {
        int offset = 0;
        vector<int> res;
        for(int i = digits.size() - 1; i >= 0; i --){
            int adder = offset;
            if(i == digits.size() - 1) adder ++;
            int sum = digits[i] + adder;
            res.insert(res.begin(), sum%10);
            offset = sum/10;
        }
        if(offset)res.insert(res.begin(), offset);
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
