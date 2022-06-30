#include <stdio.h>

int main(void) {
    int no1, no2;

    printf("두 개의 정수를 입력 해 주세요.\n");

    printf("정수 1 : "); scanf("%d",&no1);
    printf("정수 2 : "); scanf("%d",&no2);

    printf("이들의 차는 %d입니다.",(no1>no2)?no1-no2:no2-no1);
}