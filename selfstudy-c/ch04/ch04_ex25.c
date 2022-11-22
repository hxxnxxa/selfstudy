#include <stdio.h>

int main(void) {

    //왼쪽 상단이 직각인 직각삼각형 표시
    int height;

    printf("몇 단입니까 : "); scanf("%d",&height);

    for(int i=height;i>=1;i--) {
        for(int j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }

    return (0);
}