#!/usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 26-11-2014
# Last Modified : Wed Nov 26 00:43:54 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    def __dfs(self, cand, sol, start, numbers, target):
        if target == 0:
            cand += [list(sol)]
            return
        i = start
        while i < len(numbers):
            cur = numbers[i]
            if target < cur: break
            sol += [cur]
            self.__dfs(cand, sol, i+1, numbers, target - cur)
            sol.pop()
            while i < len(numbers) and numbers[i] == cur:
                i += 1
            
    # @param candidates, a list of integers
    # @param target, integer
    # @return a list of lists of integers
    def combinationSum2(self, candidates, target):
        res, sol = [], []
        numbers = sorted(candidates)
        self.__dfs(res, sol, 0, numbers, target)
        return res
if __name__ == "__main__": main()
