#include <stdio.h>

int main(void) {
    int no1, no2, no3;

    printf("세 개의 정수를 입력해주세요.\n");
    printf("정수 A : "); scanf("%d",&no1);
    printf("정수 B : "); scanf("%d",&no2);
    printf("정수 C : "); scanf("%d",&no3);

    int sum = no1 + no2 + no3;

    printf("합계는 %d이고 평균은 %.1f입니다.\n",sum,(double)sum/3);

    return (0);

}