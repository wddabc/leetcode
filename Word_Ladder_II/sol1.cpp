/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Word_Ladder_II.cpp
* Purpose :
* Creation Date : 20-01-2014
* Last Modified : Mon Jan 20 20:52:21 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
#include <queue>
    vector<vector<string> > gen_path(string end, unordered_map<string, pair<int, vector<string> > > &paths){
        pair<int, vector<string> > &cur_p = paths[end];
        if(cur_p.first == 1) return vector<vector<string> >(1, vector<string>(1, end));
        vector<string> &ance = cur_p.second;
        vector<vector<string> > res;
        for(int i = 0; i < ance.size(); ++ i){
            vector<vector<string> > ance_path = gen_path(ance[i], paths);
            for(int j = 0; j< ance_path.size(); ++ j)
                ance_path[j].push_back(end);
            res.insert(res.end(), ance_path.begin(), ance_path.end());
        }
        return res;
    }
    vector<vector<string> > findLadders(string start, string end, unordered_set<string> &dict) {
        if(start == end) return vector<vector<string> >(1, vector<string>(1, start));
        dict.insert(start);
        dict.insert(end);
        unordered_map<string, pair<int, vector<string> > > paths;
        queue<string> que;
        que.push(start);
        paths[start] = make_pair(1, vector<string>());
        while(!que.empty()){
            string cur = que.front();
            if(cur == end) break;
            que.pop();
            int step = paths[cur].first;
            string new_cand = cur;
            for(int i = 0; i < cur.length(); ++ i){
                char o = new_cand[i];
                for(char c = 'a'; c <= 'z'; ++ c){
                    if(c == o) continue;
                    new_cand[i] = c;
                    if(dict.find(new_cand) != dict.end()){
                        unordered_map<string, pair<int, vector<string> > >::iterator itr = paths.find(new_cand);
                        if(itr == paths.end()){
                            paths[new_cand] = make_pair(step + 1, vector<string>(1, cur));
                            que.push(new_cand);
                        }
                        else if(itr->second.first == (step + 1))
                            itr->second.second.push_back(cur);
                    }
                }
                new_cand[i] = o;
            }
        }
        if(paths.find(end) == paths.end()) return vector<vector<string> >();
        return gen_path(end, paths);
    }
int main(int argc, const char* argv[])
{
	set<string> dict;
	dict.insert("hot");
	dict.insert("cog");
	dict.insert("dog");
	dict.insert("tot");
	dict.insert("hog");
	dict.insert("hop");
	dict.insert("pot");
	dict.insert("dot");
	vector<vector<string> > res = findLadders("hot", "dog", dict);
	for(int i = 0; i < res.size(); ++ i){
		for(int j = 0; j < res[i].size(); ++ j)
		  cout << res[i][j] << " ";
		cout << endl;
	}
	return 0;
}
