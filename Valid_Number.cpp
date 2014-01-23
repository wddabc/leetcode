/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Valid_Number.cpp
* Purpose :
* Creation Date : 08-01-2014
* Last Modified : Wed Jan  8 21:11:40 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    #define START 0
    #define NUM 1
    #define EXP 2
    #define EXP_SYM 3
    #define EXP_NUM 4
    #define FLOAT 5
    #define NUM_FLOAT 6
    #define FLOAT_NUM 7
    #define SYM 8
    #define SYM_FLOAT 9
    bool isNumber(const char *s) {
        int start = 0, end = strlen(s) - 1;
        while(s[start]==' ') start++;
        while(s[end]==' ') end--;
        int state = START;
        if(start>end) return false;
        for(int i = start; i <= end; ++ i){
            char cur = s[i];
            if(isdigit(cur)){
                switch(state){
                    case START: state = NUM; break;
                    case EXP: state = EXP_NUM; break;
                    case EXP_SYM: state = EXP_NUM; break;
                    case FLOAT: state = FLOAT_NUM; break;
                    case SYM: state = NUM; break;
                    case SYM_FLOAT: state = FLOAT_NUM; break;
                    case NUM_FLOAT: state = FLOAT_NUM; break;
                }
            }
            else if(cur == '+' || cur == '-'){
                switch(state){
                    case START: state = SYM; break;
                    case EXP: state = EXP_SYM;break;
                    default: return false;
                }
            }
            else if(cur == 'e' || cur == 'E'){
                switch(state){
                    case NUM: state = EXP; break;
                    case NUM_FLOAT: state = EXP; break;
                    case FLOAT_NUM: state = EXP; break;
                    default: return false;
                }
            }
            else if(cur == '.'){
                switch(state){
                    case START: state = FLOAT; break;
                    case NUM: state = NUM_FLOAT; break;
                    case SYM: state = SYM_FLOAT; break;
                    default: return false;
                }
            }else return false;
        }
        return state == NUM || state == EXP_NUM || state == FLOAT_NUM || state == NUM_FLOAT;
    }
int main(int argc, const char* argv[])
{
	while(1){
		string a;
		cin >> a;
		cout << isNumber(a.c_str()) << endl;
	}
	return 0;
}
