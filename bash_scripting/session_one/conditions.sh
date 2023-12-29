read -p "enter your name: " name

if [ -z "$name" ]; then
	echo "the name is in valid"
else
	echo "go go"
fi

read -p "Enter number: " number

if [ "$number" -lt 125 ];then
	echo "you have entered a very low number"
elif [ "$number" -lt 200 ];then
	echo "this is normal"
else
	echo "this is very large"
fi

