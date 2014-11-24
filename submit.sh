#/bin/bash
# --------------------------------------- 
# File Name : submit.sh
# Creation Date : 23-11-2014
# Last Modified : Sun Nov 23 22:56:20 2014
# Created By : wdd 
# --------------------------------------- 
git add --ignore-removal *
git commit -m "$(date)"
git push
