#include<vector>
#include<map>
#include<string>
using namespace std;
int main(int argc, const char* argv[]){
		string digits = "23";
        map<int,string> dict;
        dict[0]=" ";
        dict[1]="";
        dict[2]="abc";
        dict[3]="def";
        dict[4]="ghi";
        dict[5]="jkl";
        dict[6]="mno";
        dict[7]="pqrs";
        dict[8]="tuv";
        dict[9]="wxyz";
        vector<string> res;
        for (int i = 0; i < digits.length(); ++ i)
        {
            vector<string> tmp = res;
            res.clear();
            string cand = dict[digits[i]-'0'];
            for(int j = 0; j < tmp.size(); ++ j)
                for(int k = 0; k < cand.length(); ++ k)
                    res.push_back(tmp[j]+cand[k]);
        }
	return 0;
};
