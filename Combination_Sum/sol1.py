#!/usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 26-11-2014
# Last Modified : Wed Nov 26 00:30:56 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    def __dfs(self, cand, sol, start, numbers, target):
        if target == 0:
            cand += [list(sol)]
            return
        for i in range(start, len(numbers)):
            if target < numbers[i]: break
            sol += [numbers[i]]
            self.__dfs(cand, sol, i, numbers, target - numbers[i])
            sol.pop()
            
    # @param candidates, a list of integers
    # @param target, integer
    # @return a list of lists of integers
    def combinationSum(self, candidates, target):
        res, sol = [], []
        numbers = sorted(candidates)
        self.__dfs(res, sol, 0, numbers, target)
        return res
if __name__ == "__main__": main()
