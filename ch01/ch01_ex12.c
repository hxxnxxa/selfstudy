#include <stdio.h>

int main(void) {
    printf("세 개의 변수를 입력해주세요.\n");

    int no1;
    int no2;
    int no3;

    printf("변수 1 : "); scanf("%d",&no1);
    printf("변수 2 : "); scanf("%d",&no2);
    printf("변수 3 : "); scanf("%d",&no3);

    printf("이들의 합은 %d 입니다.\n",no1+no2+no3);
}