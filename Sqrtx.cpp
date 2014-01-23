/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Sqrtx.cpp
* Purpose :
* Creation Date : 08-01-2014
* Last Modified : Wed Jan  8 23:31:19 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int sqrt(int x) {
        if (x == 0) return 0;
        double t = 1.0, last = 0.0;
        while(last != t){
            last = t;
            t = t/2+((double)x/2)/t;
        }
        return (int)t;
    }
    int sqrt(int x) {
        if (x == 0) return 0;
        int l = 1, r = min(x/2+1, 46340);
        while(l < r){
            int mid = (l+r)/2;
            if(mid == l){
                return r*r > x? l:r;
            }
            if(mid*mid > x)
                r = mid - 1;
            else{
                l = mid;
            }
        }
        return l;
    }
int main(int argc, const char* argv[])
{
	cout << sqrt(2147395599) << endl;
	return 0;
}
