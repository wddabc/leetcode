/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Integer_to_Roman.cpp
* Purpose :
* Creation Date : 03-01-2014
* Last Modified : Sun Jan 26 19:33:42 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    string intToRoman(int num) {
        string res = "";
        int itr = 0;
        char dict[4][3];
        dict[0][0] = 'I';
        dict[0][1] = 'V';
        dict[0][2] = 'X';
        dict[1][0] = 'X';
        dict[1][1] = 'L';
        dict[1][2] = 'C';
        dict[2][0] = 'C';
        dict[2][1] = 'D';
        dict[2][2] = 'M';
        dict[3][0] = 'M';
        while(num > 0) {
            int dig = num%10;
            num/=10;
            string tmp = "";
            if(!dig) {itr ++; continue;}
            if (dig < 4) { // append single Roman
                for (int i = 0; i < dig; ++ i)tmp += dict[itr][0];
            }
            else if(dig == 4){ // put "1" on the left hand side of "5"
                tmp += dict[itr][0];
                tmp += dict[itr][1];
            }
            else if(dig > 4 && dig < 9) {// put "5", then "1"
                tmp += dict[itr][1];
                for (int i = 0; i < (dig - 5); ++ i)tmp += dict[itr][0];
            }
            else if(dig == 9){ //put "1" on the left hand side of "10"
                tmp += dict[itr][0];
                tmp += dict[itr][2];
            }
            itr ++;
            res = tmp+res;
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	cout << intToRoman(2014) << endl;
	return 0;
}
