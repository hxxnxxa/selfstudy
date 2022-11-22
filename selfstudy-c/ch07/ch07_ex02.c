/* 문자형과 정수형의 크기를 표시 */

#include<stdio.h>

int main(void) {

    printf("문자형의 크기 알아보기\n");
    printf("sizeof(char)        : %u\n",    (unsigned)sizeof(char));
    printf("signed char         : %u\n",    (unsigned)sizeof(signed char));
    printf("unsigned char       : %u\n",    (unsigned)sizeof(unsigned char));

    puts("");

    printf("정수형의 크기 알아보기\n");
    printf("short int           : %u\n",    (unsigned)sizeof(short int));
    printf("unsigned short int  : %u\n",    (unsigned)sizeof(unsigned short int));
    printf("int                 : %u\n",    (unsigned)sizeof(int));
    printf("unsigned int        : %u\n",    (unsigned)sizeof(unsigned int));
    printf("long int            : %u\n",    (unsigned)sizeof(long int));
    printf("unsigned long int   : %u\n",    (unsigned)sizeof(unsigned long int));

    return(0);
}
/*
문자형의 크기 알아보기
sizeof(char)        : 1
signed char         : 1
unsigned char       : 1

정수형의 크기 알아보기
short int           : 2
unsigned short int  : 2
int                 : 4
unsigned int        : 4
long int            : 8
unsigned long int   : 8
*/
