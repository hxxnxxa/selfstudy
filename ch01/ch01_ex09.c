#include <stdio.h>

int main(void) {
    int no;

    printf("정수를 입력 해 주세요 : ");
    scanf("%d",&no);
    printf("이 값에서 10을 뺴면 %d 입니다.",no-10);

    return(0);
}