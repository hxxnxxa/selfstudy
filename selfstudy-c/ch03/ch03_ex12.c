#include <stdio.h>

int main(void) {
    int no1, no2, no3;

    printf("세 개의 정수를 입력 해 주세요.\n");

    printf("정수 1 : "); scanf("%d",&no1);
    printf("정수 2 : "); scanf("%d",&no2);
    printf("정수 3 : "); scanf("%d",&no3);

    int min;

    min = (no1 < no2) ? ((no1 < no3) ? no1 : no3) : ((no2 < no3) ? no2 : no3);
    //비교 순서 
    //1. no1 과 no2
    //1-1. no1이 작은 경우 no1과 no3 비교, no3보다 작으면 no1 반환, 아니면 no3 반환
    //1-2. no2가 작은 경우 no2와 no3 비교, no3보다 작으면 no2 반환, 아니면 no3 반환

    printf("최소값은 %d 입니다.",min);

    return (0);
}