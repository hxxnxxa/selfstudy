#include <stdio.h>

int main(void) {
    int no1, no2;

    printf("두 개의 정수를 입력해주세요.\n");
    printf("정수 A : "); scanf("%d",&no1);
    printf("정수 B : "); scanf("%d",&no2);

    printf("A == B = %d\n",(no1==no2));
    printf("A != B = %d\n",(no1!=no2));
    printf("A < B = %d\n",(no1<no2));
    printf("A > B = %d\n",(no1>no2));
    printf("A <= B = %d\n",(no1<=no2));
    printf("A >= B = %d\n",(no1>=no2));

    return (0);
}