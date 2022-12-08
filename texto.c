#include<stdio.h>
#include<termios.h>
void enableRawMode(){
    struct termios raw;
    tcgetattr(STDIN_FILEN0(),&raw);
    raw.c_lflag &= ~(ECHO);
    tcsetattr(STDIN_FILENO(),TSCAFLUSH,&raw);
}
int main(){
    enableRawMode();
    char c;
    while(read(STDIN_FILEN0(),&c,1)==1 && c!='q');
    return 0;
}