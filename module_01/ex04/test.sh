#!/bin/bash
echo "running bash script test.sh" && echo -e

make re && echo -e

echo "expected input: <./file> <filename> <string1> <string2>"

echo test 1
echo search word string1: hoi
echo replace word string2: XD

echo -e && echo "old text:"
cat txt && echo -e && echo -e

./Sed txt hai XD
echo "new text:"
cat txt.replace
rm txt.replace

echo -e && echo test 2
echo search word string1: '""'
echo replace word string2: XD
./Sed txt "" XD

echo -e && echo test 3
echo "non existing filename <xtx>"
echo search word string1: hoi
echo replace word string2: XD
./Sed xtx hoi XD

echo