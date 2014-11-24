#! /usr/bin/python
# --------------------------------------- 
# File Name : sol3.py
# Creation Date : 24-11-2014
# Last Modified : Mon Nov 24 11:01:15 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @return an integer
    def lengthOfLongestSubstring(self, s):
        dict_book, max_len, start = {}, 0, 0
        for i, val in enumerate(s):
            if val in dict_book and dict_book[val] >= start:
                tmp_len = i - start
                if tmp_len > max_len: max_len = tmp_len
                start = dict_book[val] + 1
            dict_book[val] = i
        tmp_len = len(s) - start
        if tmp_len > max_len:
            max_len = tmp_len
        return max_len
if __name__ == "__main__": main()
