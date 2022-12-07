#!/bin/bash

palindrome(){
echo "Enter Number to Check:"
read num
s=0
rev=""
temp=$num

while [ $num -gt 0 ]
do
	s=$(( $num % 10 ))
	num=$(( $num / 10 ))
	rev=$( echo ${rev}${s} )
done

if [ $temp -eq $rev ];
then
	echo "Number is Palindrome"
else
	echo "Number is Not Palindrome!!!"
fi
}


while [ 1 ]
do
	echo "Enter Choice : y to continue, n to stop"
	read choice
	if [ $choice == 'n' ]
	then
		exit
	else
		palindrome
	fi
done
