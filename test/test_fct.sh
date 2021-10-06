#!/bin/bash

gcc -Wall -Werror -Wextra $1 -I../ -L../ -lft
./a.out

if ! diff -u own_fct_output.txt src_fct_output.txt
then
	read -p 'Voulez vous voir les différences ? (y/n) ' REP
	while [ $REP != 'y' ] && [ $REP != 'n' ] 
	do 
		read -p 'Voulez vous voir les différences ? (y/n) ' REP
	done
	if [ $REP = 'y' ]
	then
		vimdiff own_fct_output.txt src_fct_output.txt
	elif [ $REP = 'n' ]
	then
		echo "Pas grave ... Tes mignon <3"
	fi
else
	diff -us own_fct_output.txt src_fct_output.txt
fi

rm -f *.out