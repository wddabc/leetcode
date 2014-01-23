/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Divide_Two_Integers.cpp
* Purpose :
* Creation Date : 04-01-2014
* Last Modified : Sat Jan  4 20:45:45 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int divide(int dividend, int divisor) {
        long long dividend_abs = abs((long long)dividend);
        long long divisor_abs = abs((long long)divisor);
        bool flag = (dividend^divisor)>>31;
        int res = 0;
		cout << divisor_abs << ":"<< dividend_abs << endl;
        while(divisor_abs < dividend_abs){
            long long ori = divisor_abs;
            int i = 1;
            while((divisor_abs<<1) < dividend_abs){
                divisor_abs <<= 1;
                i <<= 1;
            }
            res += i;
            dividend_abs -= divisor_abs;
            divisor_abs = ori;
        }
        return flag? -res:res;
    }
int main(int argc, const char* argv[])
{
	cout << divide(-1010369383, -2147483648) << endl;
	return 0;
}
