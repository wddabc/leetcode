/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : sol1.cpp
* Purpose :
* Creation Date : 16-11-2014
* Last Modified : Sun Nov 16 18:07:06 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "../general.h"
void reverseWords(string &s) {
    if(!s.length()) return;
    stringstream ss;
    int state = 0, start = s.length()-1, end = start;
    for(int i = s.length() - 1; i >= 0; -- i){
        if (s[i] == ' '){
            if (state){
                state = 0;
                ss << s.substr(start, end-start+1);
                ss << ' ';
            }
        }else{
            if(state){
                start --;
            }else{
                state= 1;
                end = i;
                start = end;
            }
        }
    }
    if (state)
        ss << s.substr(start, end - start + 1);
    string so = ss.str();
    if(!so.length()) {
        s = "";
        return;
    }
    s = so[so.length()-1]==' '? so.substr(0, so.length()-1):so;
}
int main(int argc, const char* argv[])
{
	string s = " 1";
	reverseWords(s);
	cout << s << endl;
	return 0;
}
