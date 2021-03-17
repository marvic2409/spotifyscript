export DISPLAY=:0
export XAUTHORITY=/home/user/.Xauthority

xbindkeys
nohup devilspie > /dev/null &

while sleep 0.3; do
	t=`xdotool search -classname Spotify`
	for x in $t; do
		g=`xdotool getwindowname $x`
		if [[ "$g" == "Advertisement" ]] ; then
			nohup /home/user/gggg1 >/dev/null 2>&1 &
		fi
	done
done
