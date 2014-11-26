#!/usr/bin/python
# --------------------------------------- 
# File Name : sol1.py
# Creation Date : 25-11-2014
# Last Modified : Tue Nov 25 22:12:53 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    # @param board, a 9x9 2D array
    # @return a boolean
    def isValidSudoku(self, board):
        n = len(board)
        for i in range(n):
            exist = [False]*9
            for j in range(n):
                if board[i][j] == '.':
                    continue
                if exist[ord(board[i][j])-ord('1')]:
                    return False
                else:
                    exist[ord(board[i][j])-ord('1')] = True
        for i in range(n):
            exist = [False]*9
            for j in range(n):
                if board[j][i] == '.':
                    continue
                if exist[ord(board[j][i])-ord('1')]:
                    return False
                else:
                    exist[ord(board[j][i])-ord('1')] = True
        for i in range(n):
             exist = [False]*9
             for j in range(n):
                 x, y = (i/3)*3 + j/3, (i%3)*3 + j%3
                 if board[x][y] == '.':
                     continue
                 if exist[ord(board[x][y])-ord('1')]:
                     return False
                 else:
                     exist[ord(board[x][y])-ord('1')] = True
        return True
if __name__ == "__main__": main()
