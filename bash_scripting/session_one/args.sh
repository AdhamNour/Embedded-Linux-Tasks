
#!/bin/bash

echo "script name is $0"
echo "the first arguments is $1"
echo "the second arguments is $2"

echo
echo
echo

echo "Number of Arguments is $#"
echo "printing the arguments using for loop"

for arg in "$@"; do
	echo "Arg: $arg"
done

echo;echo;echo;
echo "shifting arguments"
echo "Original args are :"
for arg in "$@"; do
	echo $arg
done
echo "the size of the args is $#"
shift
echo "Shifted args are"
for arg in "$@"; do
	echo $arg
done
echo "the size of the shifted args is $#"

