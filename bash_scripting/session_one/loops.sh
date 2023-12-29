echo "printing loob without ranges"

for i in 1 2 3 4 5 6 7 8 9; do
	echo $i
done

echo "priniting loop with range"

for i in {1..60}; do
	echo "the number is ${i}"
done

learn="adhamnourelwaffaa@gmail.com"

for i in $learn;do
	echo $i
done
echo "=============lisiting the content of the current directory=============="

x=$(ls)
for i in $x; do
	echo "the file name is $i"
	echo "the content of \"$i\" file is "
	cat $i
	echo
	echo
done
