#!/usr/bin/python
# ---------------------------------------
# File Name : sol1.py
# Creation Date : 03-03-2015
# Last Modified : Tue Mar  3 15:15:25 2015
# Created By : wdd
# ---------------------------------------
import sys
import re
import string
import pickle
import theano
import argparse
import theano.tensor as T
import numpy as np
from itertools import *

_arg_parser = argparse.ArgumentParser()
_arg_parser.add_argument('--L', default=10, type=int, action='store', help='')
_args = _arg_parser.parse_args()


def _config():
    return '_'.join("{0}{1}".format(key, val) for (key, val) in vars(_args).items())


def full_justify(words, L):
    delm = '_'
    res, tmps, tmpL, idx, tmp_coll = [], '', L, 0, []
    while idx < len(words):
        tmps = words[idx]
        tmpL -= len(tmps)
        start = idx + 1
        end = start
        while end < len(words) and tmpL > len(words[end]):
            tmpL -= len(words[end]) + 1
            end += 1
        if end < len(words):
            if end == start:
                for i in range(tmpL):
                    tmps += delm
                res += [tmps]
            else:
                wc = end - start
                interval = tmpL / wc + 1
                offset = tmpL % wc
                inter = [interval] * wc
                for i in range(offset):
                    inter[i] += 1
                for i in range(end - start):
                    for j in range(inter[i]):
                        tmps += delm
                    tmps += words[start + i]
                res += [tmps]
        else:
            for i in range(end - start):
                tmps += (interval + words[start + i])
            for i in range(tmpL):
                tmps += delm
            res += [tmps]
            break
        tmpL = L
        idx = end
    return res


def main():
    words, p = '', re.compile('\s+')
    for l in sys.stdin:
        words += l.strip()
    print '\n'.join(full_justify(p.split(words), _args.L))

if __name__ == "__main__":
    main()
