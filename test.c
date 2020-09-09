#include <string.h>
#include <stdio.h>
#include <stdarg.h>


char buff[256];
void myPrint(char* parma, ...){
    va_list valist;
    strcpy(buff, "LOG: ");
    va_start(valist, parma);
    vsnprintf(&buff[5], 256-5, parma, valist);
    va_end(valist);
}

int main(){
    myPrint("%s, %d, %s", "hello", 100, "world");
    printf("%s\n", buff);
    return 0;
}