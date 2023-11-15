#!/bin/bash
echo "running bash script test.sh" && echo -e

make re && echo -e

echo "expected input: <./Harl> <level>"

echo -e
echo test 1. No input
./Harl
echo -e

echo "test 2 wrong input ("sdfsdf")"
./Harl "sdfsdf"
echo -e

echo "test 3 wrong input (10)"
./Harl "10"
echo -e

echo test 4
echo "level wrong input (-10)"
./Harl "-10"
echo -e

rm ./Harl
