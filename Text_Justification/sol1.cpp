/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Text_Justification.cpp
* Purpose :
* Creation Date : 08-01-2014
* Last Modified : Sun Feb  2 00:50:02 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    vector<string> fullJustify(vector<string> &words, int L) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        vector<string> res;
        bool newline = true;
        string tmps = "";
        int tmpL = L, idx = 0;
        vector<string> tmp_coll;
        while(idx < words.size()){
            tmps = words[idx];
            tmpL -= words[idx].length();// tmpL is the remaining length
            int start = idx + 1, end = start;
            while(end < words.size() && tmpL >= words[end].length() + 1) {
				tmpL-= (words[end].length() + 1);
				end++;
			}//end the is idx of the last word
            if(end < words.size()){// not the end
                if(end == start){ // single word very long
                    for(int i = 0; i < tmpL; ++ i)
                        tmps += ' '; // fill the rest by blank
                    res.push_back(tmps);
                }
                else{
                    int wc = end-start, interval = tmpL/wc + 1, offset = tmpL%wc;
                    vector<int> inter(wc, interval); // default interval
                    for(int i = 0; i < offset; ++ i) inter[i] ++; // add reminder
                    for(int i = 0; i < end - start; ++ i){
                        for(int j = 0; j < inter[i]; ++ j)
						  tmps += ' ';
                        tmps += words[start+i];
                    }
                    res.push_back(tmps);
                }
            }
            else{ // the end
                for(int i = 0; i < end - start; ++ i)
                    tmps += (' ' + words[start+i]);
                for(int i = 0; i < tmpL; ++ i)
                    tmps += ' ';
                res.push_back(tmps);
                break;
            }
            tmpL = L;
            idx = end;
        }
        return res;
    }
int main(int argc, const char* argv[])
{
	vector<string> words;
	words.push_back("This");
	words.push_back("is");
	words.push_back("an");
	words.push_back("example");
	words.push_back("of");
	words.push_back("text");
	words.push_back("justification.");
	vector<string> res = fullJustify(words, 14);
	for(int i = 0; i < res.size(); ++i)
	  cout << res[i]  << "#"<< endl;
	return 0;
}
