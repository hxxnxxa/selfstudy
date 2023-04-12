#include <stdio.h>

int main(void) {
    int no1;
    int no2;

    printf("두 개의 정수를 입력해주세요.\n");

    printf("정수 A : "); scanf("%d",&no1);
    printf("정수 B : "); scanf("%d",&no2);

    //제어문에서의 결과가 0이면 else문이 출력된다.
    if(no1%no2) 
        puts("B는 A의 약수가 아닙니다.");
    else 
        puts("B는 A의 약수입니다.");
}
