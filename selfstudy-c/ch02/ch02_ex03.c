#include <stdio.h>

int main(void) {
    int no1;
    int no2;

    printf("정수 A : "); scanf("%d",&no1);
    printf("정수 B : "); scanf("%d",&no2);

    printf("A의 값은 B의 %d%%입니다.\n",100*no1/no2);
}