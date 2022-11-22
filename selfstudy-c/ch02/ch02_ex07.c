#include <stdio.h>

int main(void) {
    double no;

    printf("실수를 입력해주세요 : "); scanf("%lf",&no);

    printf("0.1을 더하면 %lf 입니다.\n",(no+0.1));
    printf("0,1을 빼면 %lf 입니다.\n",(no-0.1));
    printf("0.1을 곱하면 %lf 입니다.\n",(no*0.1));
    printf("0.1로 나누면 %lf 입니다.\n",(no/0.1));
}