#include <stdio.h>

int main(void) {
    int no1;
    int no2; 

    printf("두 개의 정수를 입력 해 주세요.\n");
    printf("정수 A : "); scanf("%d",&no1);
    printf("정수 B : "); scanf("%d",&no2);

    printf("이들의 합은 %d이고 곱은 %d입니다.",(no1+no2),(no1*no2));
}