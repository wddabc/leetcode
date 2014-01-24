/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : LRU_Cache.cpp
* Purpose :
* Creation Date : 22-01-2014
* Last Modified : Wed Jan 22 23:04:24 2014
* Created By : wdd 
_._._._._._._._._._._._._._._._._._._._._.*/
#include "general.h"
class LRUCache{
public:
    struct cache_node{
        int key, val;
        cache_node *prev, *next;
        cache_node(int k, int v) : key(k), val(v), prev(NULL), next(NULL) {}
    };
    int capacity;
    cache_node *head, *tail;
    unordered_map<int, cache_node* > mp;
    LRUCache(int capacity) {
        this->capacity = capacity;
        this->head = new cache_node(0,0);
        this->tail = new cache_node(0,0);
        this->head->next = this->tail;
        this->tail->prev = this->head;
    }
    void add_to_head(cache_node *nd){
        this->head->next->prev = nd;
        nd->next = head->next;
        this->head->next = nd;
        nd->prev = head;
    }
    void pop(cache_node *nd){
        nd->prev->next = nd->next;
        nd->next->prev = nd->prev;
        add_to_head(nd);
    }
    int cut(){
        cache_node *to_cut = this->tail->prev;
        to_cut->prev->next = this->tail;
        this->tail->prev = to_cut->prev;
        int res = to_cut->key;
        delete[] to_cut;
        return res;
    }
    int get(int key) {
       unordered_map<int, cache_node*>::iterator itr = this->mp.find(key);
       if(itr == this->mp.end()) return -1;
       pop(itr->second);
       return itr->second->val;
    }
    void set(int key, int value) {
        if(get(key) == -1){
            cache_node *new_node = new cache_node(key, value);
            this->mp[key] = new_node;
            add_to_head(new_node);
        }else{
            head->next->val = value;
            return;
        }
        if(this->mp.size() > this->capacity){
            int to_rm = cut();
            mp.erase(to_rm);
        }
    }
};
int main(int argc, const char* argv[])
{
	return 0;
}
