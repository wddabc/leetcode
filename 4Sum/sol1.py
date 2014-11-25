#! /usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 25-11-2014
# Last Modified : Tue Nov 25 01:01:44 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @return a list of lists of length 4, [[val1,val2,val3,val4]]
    def fourSum(self, num, target):
        res = []
        mynum = sorted(num)
        for i in range(len(mynum)):
            if i > 0 and mynum[i] == mynum[i-1]:
                continue
            for j in range(i+1, len(mynum)):
                if j > i+1 and mynum[j] == mynum[j-1]:
                    continue
                l, r = j + 1, len(mynum)-1
                while l < r:
                    if l > j+1 and mynum[l] == mynum[l-1]:
                        l += 1
                        continue
                    if r < len(mynum)-1 and mynum[r] == mynum[r+1]:
                        r -= 1
                        continue
                    sum = mynum[i] + mynum[j] + mynum[l] + mynum[r]
                    if sum > target: r -= 1
                    elif sum < target: l += 1
                    else:
                        res += [[mynum[i], mynum[j], mynum[l], mynum[r]]]
                        l += 1
                        r -= 1
        return res

def main():
	s=Solution()
	print s.fourSum([-483,-476,-475,-460,-450,-431,-428,-419,-410,-374,-347,-345,-311,-303,-299,-286,-278,-271,-260,-257,-240,-227,-217,-203,-196,-191,-189,-179,-171,-151,-150,-144,-134,-130,-112,-107,-97,-96,-94,-70,-62,-54,-38,-38,-23,-12,-11,-2,2,4,30,33,38,51,51,54,69,90,108,111,112,112,121,129,163,182,184,194,198,199,210,228,229,232,236,237,249,249,259,282,303,312,317,329,329,342,349,368,375,380,384,393,420,433,441,446,460,474,497], -2306)
if __name__ == "__main__": main()
