/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Sqrtx.cpp
* Purpose : Binary Search
* Creation Date : 08-01-2014
* Last Modified : Sun Feb  2 02:17:22 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    int sqrt(int x) {
        if (x == 0) return 0;
        int l = 1, r = min(x/2+1, 46340), mid;
        while(l <= r){
            mid = (l+r)/2;
            if(mid*mid == x) return mid;
            if(mid*mid > x)
                r = mid - 1;
            else
                l = mid + 1;
        }
        return min(l,r);
    }
int main(int argc, const char* argv[])
{
	cout << sqrt(2147395599) << endl;
	return 0;
}
