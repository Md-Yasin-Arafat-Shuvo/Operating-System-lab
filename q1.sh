#!/bin/bash

echo " Current Directory "
pwd

echo " List of Files"
ls

mkdir 201-15-13706
cd 201-15-13706

echo
echo “Enter your name”
read name
echo "Name:" $name > data_name.txt
echo “Enter your age”
read age
echo "Age:" $age >> data_age.txt
cat data_name.txt data_age.txt > data_all.txt
echo "Write Something about Yourself"
read all
echo "about myself:" $all >> data_all.txt
