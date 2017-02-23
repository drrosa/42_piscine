cmd=$(ifconfig | grep "inet " | grep -v 127.0.0.1 | cut -d \  -f2);
if [ -z "$cmd" ]
then
		echo "Je suis perdu!"
else
		echo "$cmd"
fi
