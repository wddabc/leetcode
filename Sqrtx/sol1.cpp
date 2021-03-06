/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Sqrtx.cpp
* Purpose : Newton's Method
* Creation Date : 08-01-2014
* Last Modified : Sun Feb  2 02:10:01 2014
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
int main(int argc, const char* argv[])
{
	cout << sqrt(2147395599) << endl;
	return 0;
}
