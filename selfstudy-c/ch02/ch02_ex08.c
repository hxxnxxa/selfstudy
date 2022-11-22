#include <stdio.h>

int main(void) {
    double height;

    printf("신장을 cm로 입력해주세요 : "); scanf("%lf",&height);
    printf("이것은 %lf인치입니다.", (height/2.54)); 

    return (0);
}