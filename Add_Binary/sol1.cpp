/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Add_Binary.cpp
* Purpose :
* Creation Date : 08-01-2014
* Last Modified : Wed Jan  8 19:32:16 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    string addBinary(string a, string b) {
        string res;
        int offset = 0, idx_a = a.length() - 1, idx_b = b.length() - 1;
        while(idx_a >=0 && idx_b >= 0){
            int ad = a[idx_a--] - '0', bd = b[idx_b--] - '0', tmp = offset+ad+bd;
            char nd = int(tmp&1) + '0';
			cout << nd << endl;
            offset = tmp >> 1;
            res = nd + res;
        }
        while(idx_a >=0){
            int ad = a[idx_a--] - '0', tmp = offset+ad;
            char nd = tmp&1+'0';
            offset = tmp >> 1;
            res = nd + res;
        }
        while(idx_b >=0){
            int bd = b[idx_b--] - '0', tmp = offset+bd;
            char nd = tmp&1+'0';
            offset = tmp >> 1;
            res = nd + res;
        }
        if(offset) res = '1' + res;
        return res;
    }
int main(int argc, const char* argv[])
{
	cout << addBinary("0", "0") << endl;
	return 0;
}
