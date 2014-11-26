#!/usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 26-11-2014
# Last Modified : Wed Nov 26 00:06:26 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @return a string
    def countAndSay(self, n):
        res = '1'
        for i in range(n-1):
            cnt, tmp, ss = 0, '', '' 
            for j in range(len(res)):
                if not j: tmp = res[j]
                if res[j] == tmp:
                    cnt += 1
                else:
                    ss += str(cnt) + tmp
                    tmp = res[j]
                    cnt = 1
            ss += str(cnt) + tmp
            res = ss
        return res
                
if __name__ == "__main__": main()
