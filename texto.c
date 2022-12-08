#include<stdio.h>
int main(){
    char c;
    while(read(STDIN_FILEN0(),&c,1)==1 && c!='q');
    return 0;
}