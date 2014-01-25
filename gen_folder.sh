#/bin/bash
# --------------------------------------- 
# File Name : gen_folder.sh
# Creation Date : 24-01-2014
# Last Modified : Fri Jan 24 01:24:35 2014
# Created By : wdd 
# --------------------------------------- 
array=($(ls | grep -v "test.cpp" | grep ".*\.cpp$"))
for d in ${array[*]}
do
	newname=$(echo $d | sed 's/.cpp//g')
	echo ${newname}
	mkdir ${newname}
	mv $d ${newname}/sol1.cpp
	git add ${newname}
	git add ${newname}/sol1.cpp
	git rm $d
done
git commit -m "$(date)"
git push
