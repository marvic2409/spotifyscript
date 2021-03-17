#include <stdio.h>
#include <string.h>

int main () {
    char command[200];
    strcpy(command, "killall -9 spotify");
    system(command);
    strcpy( command, "nohup /usr/bin/spotify >/dev/null 2>&1 &" );
    system(command);
    sleep(0.4);
    strcpy(command, "dbus-send --print-reply --dest=org.mpris.MediaPlayer2.spotify /org/mpris/MediaPlayer2 org.mpris.MediaPlayer2.Player.PlayPause");
    system(command);
    strcpy(command, "dbus-send --print-reply --dest=org.mpris.MediaPlayer2.spotify /org/mpris/MediaPlayer2 org.mpris.MediaPlayer2.Player.Next");
    system(command);
    return(0);

}
