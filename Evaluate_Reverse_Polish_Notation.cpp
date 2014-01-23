/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Evaluate_Reverse_Polish_Notation.cpp
* Purpose :
* Creation Date : 23-01-2014
* Last Modified : Thu Jan 23 12:28:40 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
#include <stack>
    bool is_num(string str){
        if(str[0] == '-' && str.length() == 1) return false;
        if(str[0] == '-') str = str.substr(1);
        for(int i = 0; i < str.length(); ++ i)
            if(!isdigit(str[i])) return false;
        return true;
    }
    int evalRPN(vector<string> &tokens) {
        stack<int> sta;
        for(int i = 0; i < tokens.size(); ++ i){
            string t = tokens[i];
            if(is_num(t)) 
                sta.push(atoi(t.c_str()));
            else if(t == "+"|| t == "-" || t == "*" || t == "/"){
                int num2 = sta.top();
                sta.pop();
                int num1 = sta.top();
                sta.pop();
                int res;
                switch(t[0]){
                    case '+': res = num1+num2; break;
                    case '-': res = num1-num2; break;
                    case '*': res = num1*num2; break;
                    case '/': res = num1/num2;
                }
                sta.push(res);
            }
        }
        return sta.top();
    }
int main(int argc, const char* argv[])
{
	vector<string> tokens;
	tokens.push_back("0");
	tokens.push_back("3");
	tokens.push_back("/");
	cout << evalRPN(tokens) << endl;
	return 0;
}
