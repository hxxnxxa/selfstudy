/*
 * char형에 부호가 있는지 없는지를 판정하고 그 표현 범위를 출력하는 프로그램
*/

#include <stdio.h>
#include <limits.h>

int main(void) {
    printf("이 처리계의 char형은 ");

    if(CHAR_MIN) {
        puts("부호가 있고, ");
    } 
    
    else {
        puts("부호가 없고, ");
    }

    printf("%d ~ %d 를 표현할 수 있습니다. \n", CHAR_MIN, CHAR_MAX);

    return(0);
}