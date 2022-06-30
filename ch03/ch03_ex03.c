#include <stdio.h>

int main(void) {
    int no;
    printf("정수를 입력해주세요 : "); scanf("%d",&no);

    if(no%2)
        puts("이 수는 홀수입니다.");
    else
        puts("이 수는 짝수입니다.");

    return (0); 
}