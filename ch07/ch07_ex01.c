/* 문자형과 정수형의 각 형을 표현할 수 있는 숫자값의 범위 표시 */

#include<stdio.h>
#include<limits.h>

/* limits.h 헤더 : 각 자료형의 최소값과 최대값 제공 */

int main(void) {

    printf("문자형의 크기 알아보기\n");
    printf("char                : %d~%d\n",     CHAR_MIN,   CHAR_MAX);
    printf("signed char         : %d~%d\n",     SCHAR_MIN,  SCHAR_MAX);
    printf("unsigned char       : %d~%d\n",     0,          UCHAR_MAX);

    printf("정수형의 크기 알아보기\n");
    printf("short int           : %d~%d\n",     SHRT_MIN,   SHRT_MAX);
    printf("unsigned short int  : %u~%u\n",     0,          USHRT_MAX);
    printf("int                 : %d~%d\n",     INT_MIN,    INT_MAX);
    printf("unsigned int        : %u~%u\n",     0,          UINT_MAX);
    printf("long int            : %ld~%ld\n",   LONG_MIN,   LONG_MAX);
    printf("unsigned long int   : %lu~%lu\n",   0,          ULONG_MAX);

    return(0);
}

/*
문자형의 크기 알아보기
char                : -128~127
signed char         : -128~127
unsigned char       : 0~255

정수형의 크기 알아보기
short int           : -32768~32767
unsigned short int  : 0~65535
int                 : -2147483648~2147483647
unsigned int        : 0~4294967295
long int            : -9223372036854775808~9223372036854775807
unsigned long int   : 0~18446744073709551615
*/
