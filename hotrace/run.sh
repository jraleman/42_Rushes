#!/bin/bash

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/14 18:03:49 by jaleman           #+#    #+#              #
#    Updated: 2017/05/14 18:03:50 by jaleman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

c=1
tmp=0
average=0
while [ $c -le 10 ]
do
	tmp=`./hotmouli hotrace resources/test01.htr | sed -n 4p | awk '{print $5}'`
	average=`echo "$average + $tmp" | bc`
	(( c++ ))
done
average=`echo "$average /10" | bc -l`
echo "test1 : $average"

c=1
tmp=0
average=0
while [ $c -le 10 ]
do
	tmp=`./hotmouli hotrace resources/test02.htr | sed -n 4p | awk '{print $5}'`
	average=`echo "$average + $tmp" | bc`
	(( c++ ))
done
average=`echo "$average /10" | bc -l`
echo "test2 : $average"


c=1
tmp=0
average=0
while [ $c -le 10 ]
do
	tmp=`./hotmouli hotrace resources/test03.htr | sed -n 4p | awk '{print $5}'`
	average=`echo "$average + $tmp" | bc`
	(( c++ ))
done
average=`echo "$average /10" | bc -l`
echo "test3 : $average"



c=1
tmp=0
average=0
while [ $c -le 10 ]
do
	tmp=`./hotmouli hotrace resources/test04.htr | sed -n 4p | awk '{print $5}'`
	average=`echo "$average + $tmp" | bc`
	(( c++ ))
done
average=`echo "$average /10" | bc -l`
echo "test4 : $average"



c=1
tmp=0
average=0
while [ $c -le 10 ]
do
	tmp=`./hotmouli hotrace resources/test05.htr | sed -n 4p | awk '{print $5}'`
	average=`echo "$average + $tmp" | bc`
	(( c++ ))
done
average=`echo "$average /10" | bc -l`
echo "test5 : $average"


c=1
tmp=0
average=0
while [ $c -le 10 ]
do
	tmp=`./hotmouli hotrace resources/test06.htr | sed -n 4p | awk '{print $5}'`
	average=`echo "$average + $tmp" | bc`
	(( c++ ))
done
average=`echo "$average /10" | bc -l`
echo "test6 : $average"

c=1
tmp=0
average=0
while [ $c -le 10 ]
do
	tmp=`./hotmouli hotrace resources/test07.htr | sed -n 4p | awk '{print $5}'`
	average=`echo "$average + $tmp" | bc`
	(( c++ ))
done
average=`echo "$average /10" | bc -l`
echo "test7 : $average"
