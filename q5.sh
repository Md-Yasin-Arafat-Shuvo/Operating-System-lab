#!/bin/bash

totalmarks=100
echo -n "Enter marks: "
read marks

if [ $marks -gt $totalmarks ] ; then
echo " Invalid Argument"
elif [ $marks -ge 80 -a $marks -le 100 ] ; then
echo "A+"
elif [ $marks -ge 60 -a $marks -le 79 ] ; then
echo "A"
elif [ $marks -ge 50 -a $marks -le 59 ] ; then
echo "B"
else
echo "Fail"

fi

