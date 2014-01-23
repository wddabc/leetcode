/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : Clone_Graph.cpp
* Purpose :
* Creation Date : 21-01-2014
* Last Modified : Tue Jan 21 21:42:00 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
    void dfs(UndirectedGraphNode *to, UndirectedGraphNode *from, unordered_map<int, UndirectedGraphNode *> &mp){
        vector<UndirectedGraphNode *> &neighbors = from->neighbors;
        for(int i = 0; i < neighbors.size(); ++ i){
            unordered_map<int, UndirectedGraphNode *>::iterator itr = mp.find(neighbors[i]->label);
            if(itr == mp.end()){
                to->neighbors.push_back(new UndirectedGraphNode(neighbors[i]->label));
                mp[neighbors[i]->label] = to->neighbors.back();
                dfs(to->neighbors.back(), neighbors[i], mp);
            }
            else
                to->neighbors.push_back(itr->second);
        }
    }
    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
        UndirectedGraphNode *res;
        if(!node) return NULL;
        res = new UndirectedGraphNode(node->label);
        unordered_map<int, UndirectedGraphNode *> mp ;
        mp[node->label] = res;
        dfs(res, node, mp);
        return res;
    }
int main(int argc, const char* argv[])
{
	return 0;
}
