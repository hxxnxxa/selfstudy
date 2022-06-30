#include <stdio.h>

int main(void) {
    int no;

    printf("정수를 입력해주세요 : "); scanf("%d",&no);
    
    if (no%10)
        puts("이 수는 10의 배수가 아닙니다.");

    return (0);
}