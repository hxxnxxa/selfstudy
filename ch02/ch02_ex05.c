#include <stdio.h>

int main(void) {
    int no1;
    int no2;

    printf("두 개의 정수를 입력해주세요.\n");

    printf("정수 A : "); scanf("%d",&no1);
    printf("정수 B : "); scanf("%d",&no2);

    printf("평균값의 부호를 반전한 값은 %d입니다.",-((no1+no2)/2));

    return (0);
}