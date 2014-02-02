/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Multiply_Strings.cpp
* Purpose :
* Creation Date : 06-01-2014
* Last Modified : Fri Jan 31 17:02:07 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
    string mult_single(string num1, int num2){
        int offset = 0, i = num1.length()-1;
        string res;
        while(i >= 0 || offset){
            int tmp = offset;
            if(i >= 0) tmp += (num1[i--]-'0')*num2;
            offset = tmp/10;
            tmp = tmp%10+'0';
            res = (char)tmp+ res;
        }
        return res;
    }
    string sum_str(string num1, string num2){
        int offset = 0, i1 = num1.length() - 1, i2 = num2.length() - 1;
        string res;
        while(i1 >= 0 || i2 >= 0 || offset){
            int tmp = offset;
            if(i1 >= 0) tmp += num1[i1--] - '0';
            if(i2 >= 0) tmp += num2[i2--] - '0';
            offset = tmp/10;
            tmp = tmp%10 + '0';
            res = (char)tmp + res;
        }
        return res;
    }
    string multiply(string num1, string num2) {
        string res = "0";
        for(int i = num2.length()-1; i >= 0; -- i){
            string tmp = mult_single(num1, num2[i] - '0');
            for(int k = 0; k < num2.length()-1-i; ++ k)
                tmp += '0';
            res = sum_str(res, tmp);
        }
        int s = 0;
        while(res[s] == '0') s++;
        return res.substr(min(s, (int)res.length()-1));
    }
int main(int argc, const char* argv[])
{
	cout << multiply("0", "0") << endl;
	return 0;
}
