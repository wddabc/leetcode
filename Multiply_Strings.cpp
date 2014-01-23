/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Multiply_Strings.cpp
* Purpose :
* Creation Date : 06-01-2014
* Last Modified : Mon Jan  6 16:18:52 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    string multi_single(string num1, int num2){
        int offset = 0, idx = num1.length() - 1;
        string res = "";
        while(offset > 0 || idx >= 0){
            int tmp = offset;
            if(idx >= 0)tmp += (num1[idx] - '0')*num2;
            offset = tmp/10;
            idx --;
            char addon = '0' + tmp%10;
            res = addon + res;
        }
        return res;
    }
    string sum_string(string num1, string num2){
        int idx1 = num1.length() - 1, idx2 = num2.length() - 1, offset = 0;
        string res = "";
        while(idx1 >= 0 || idx2 >= 0 || offset > 0){
            int tmp = offset;
            if(idx1 >= 0) tmp += num1[idx1] - '0';
            if(idx2 >= 0) tmp += num2[idx2] - '0';
            offset = tmp/10;
            idx1 --;
            idx2 --;
            char addon = '0'+tmp%10;
            res = addon + res;
        }
        return res;
    }
    string multiply(string num1, string num2) {
        string res;
        for(int i = num2.length() - 1; i >= 0; -- i){
            string tmp = multi_single(num1, num2[i] - '0');
            for(int k = 0; k < num2.length() - 1 - i; ++ k)
                tmp += '0';
            res = sum_string(res, tmp);
        }
        int non_zero = 0;
        while(res[non_zero] == '0') non_zero++;
        return res.substr(min(non_zero,(int)res.length()-1));
    }
int main(int argc, const char* argv[])
{
	cout << multiply("0", "0") << endl;
	return 0;
}
