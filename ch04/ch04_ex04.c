#include <stdio.h>

int main(void) {
    int num;
    int sum = 0;
    int count = 1;

    printf("양의 정수를 입력해주세요 : "); scanf("%d",&num);

    do {
        sum += count;
        count += 1;
    } while(count<=num);

    printf("1부터 %d까지 더한 값은 %d입니다.",num,sum);

    return (0);
}