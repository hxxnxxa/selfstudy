/*
    자동기억기간과 정적기억기간
*/
#include <stdio.h>

int fx = 0; // 정적기억기간 + 파일유효범위

void func(void) {
    static int sx = 0;  // 정적기억기간 + 블록유효범위
    int ax = 0;         // 자동기억기간 + 블록유효범위ㅓㄲ

    printf("%3d%3d%3d\n", ax++, sx++, fx++);
}

int main(void) {
    int i;

    puts("ax sx fx");
    puts("------------");
    
    for(i=0; i<10; i++) {
        func();
    }

    puts("------------");

    return(0);
}