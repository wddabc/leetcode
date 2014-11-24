#! /usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 24-11-2014
# Last Modified : Mon Nov 24 02:01:22 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class MinStack:
    # @param x, an integer
    # @return an integer
    def __init__(self):
        self.__stack, self.__min_stack = [], []
    
    def push(self, x):
        self.__stack += [x]
        if not len(self.__min_stack) or self.__min_stack[-1][0] > x:
            self.__min_stack += [(x,1)]
        elif self.__min_stack[-1][0] == x:
            self.__min_stack[-1] = (x, self.__min_stack[-1][1] + 1)
        

    # @return nothing
    def pop(self):
        cur_top = self.__stack.pop()
        if cur_top == self.__min_stack[-1][0]:
            self.__min_stack[-1] = (cur_top, self.__min_stack[-1][1] - 1)
            if not self.__min_stack[-1][1]:
                self.__min_stack.pop()

    # @return an integer
    def top(self):
        return self.__stack[-1]
        

    # @return an integer
    def getMin(self):
        return self.__min_stack[-1][0]
def main():
	s=MinStack()
	s.push(-1)
	print s.top()
	print s.getMin()
if __name__ == "__main__": main()
