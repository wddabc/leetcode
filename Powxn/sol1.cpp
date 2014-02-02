/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Powxn.cpp
* Purpose :
* Creation Date : 07-01-2014
* Last Modified : Fri Jan 31 18:46:40 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    double pow(double x, int n) {
        if(!n) return 1;
        double res = 1;
        bool pos = (n > 0);
        if(!pos) n = -n;
        while(n > 0){
            int tmp = 1;
            double tmp_res = x;
            while(tmp < n/2){
                tmp_res *= tmp_res;
                tmp *= 2;
            }
            n-= tmp;
            res *= tmp_res;
        }
        return pos?res:1/res;
    }
int main(int argc, const char* argv[])
{
	cout << pow1(3, 4) << endl;
	return 0;
}
