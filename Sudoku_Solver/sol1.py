#!/usr/bin/python
# --------------------------------------- 
# File Name : sol1.py TLE
# Creation Date : 25-11-2014
# Last Modified : Tue Nov 25 23:11:43 2014
# Created By : wdd 
# --------------------------------------- 
import sys, re, string, pickle
from itertools import *
class Solution:
    def __get_cand(self, x, y, board):
        res, cando, n = [], [True]*9, len(board)
        for i in range(n):
            if board[x][i] != '.': 
                cando[ord(board[x][i])-ord('1')] = False
            if board[i][y] != '.':
                cando[ord(board[x][i])-ord('1')] = False
            if board[(x/3)*3+i/3][(y%3)*3+i%3] != '.':
                cando[ord(board[(x/3)*3+i/3][(y%3)*3+i%3])-ord('1')] = False
        for i in range(9):
            if cando[i]:
                res += [chr(ord('1')+i)]
        return res
        
    def __solve_sudoku_bool(self, board):
        n, full = len(board), True
        x = 0
        while x < n:
            y = 0
            while y < n:
                if board[x][y] == '.':
                    full = False
                    break
                y += 1
            if not full: break
            x += 1
        if full: return True
        cand_lst = self.__get_cand(x, y, board)
        if not len(cand_lst): return False
        for c in cand_lst:
            board[x][y] = c
            if(self.__solve_sudoku_bool(board)):
                return True
            board[x][y] = '.'
        return False
    # @param board, a 9x9 2D array
    # Solve the Sudoku by modifying the input board in-place.
    # Do not return any value.
    def solveSudoku(self, board):
        self.__solve_sudoku_bool(board)
        
if __name__ == "__main__": main()
