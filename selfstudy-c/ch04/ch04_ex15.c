#include <stdio.h>

int main(void) {

    int num;
    int i;

    printf("양의 정수를 입력해주세요 : "); scanf("%d",&num);

    for(i=1;i<=num;i++) {
        printf("%d\t",i);
    }

    return (0);
}