#include <stdio.h>

int main(void) {
    int num;

    printf("양의 정수를 입력해주세요 : "); scanf("%d",&num);

    while(num>0) {
        printf("*\n");
        num--;
    }

    return (0);
}