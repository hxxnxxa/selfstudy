#include <stdio.h>

int main(void) {
    int height;
    printf("신장을 입력해주세요 : "); scanf("%d",&height);
    printf("표준체중은 %.1f입니다.",((double)height-100)*0.9);
}