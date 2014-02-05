/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Single_Number_II.cpp
* Purpose :
* Creation Date : 22-01-2014
* Last Modified : Wed Feb  5 14:38:11 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int singleNumber(int A[], int n) {
        int one = 0/*bits that appeared once*/, two = 0/*bits that appeared twice*/, three = 0/*bits that appeared three times*/;
        for(int i = 0; i < n; ++ i){
            two |= one&A[i];// appeared once and appeared again
            one ^= A[i];//appeared once
            three = two&one;//if appreared once and appeared twice, then three times
            one &= ~three; // remove the three times ones
            two &= ~three;// remove the three times ones
        }
        return one;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
