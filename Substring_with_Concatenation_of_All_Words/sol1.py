#!/usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 25-11-2014
# Last Modified : Tue Nov 25 16:03:49 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @param S, a string
    # @param L, a list of string
    # @return a list of integer
    def findSubstring(self, S, L):
        if not len(L): return []
        res, gwc = [], {}
        for l in L: 
            gwc[l] = gwc[l] + 1 if l in gwc else 1
        terml = len(L[0])
        ttl = terml * len(L)
        for i in range(len(S)-ttl):
            flag = True
            for j in range(i, i+ttl, terml):
                lwc = {}
                cur = S[j:j+terml]
                if cur not in gwc:
                    flag = False
                    break
                lwc[cur] = lwc[cur] + 1 if cur in lwc else 1
                if lwc[cur] > gwc[cur]:
                    flag = False
                    break
            if flag: res += [i]
        return res
if __name__ == "__main__": main()
