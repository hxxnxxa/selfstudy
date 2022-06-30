#include <stdio.h>

int main(void) {
    int no;

    printf("정수를 입력해주세요 : "); scanf("%d",&no);

    switch(no%2) {
        case 0 : puts("이 수는 짝수입니다."); break;
        case 1 : puts("이 수는 홀수입니다."); break;
    }

    return (0);
}