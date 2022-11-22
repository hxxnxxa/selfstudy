#include <stdio.h>

int main(void) {

    //오른쪽 상단이 직각인 직각삼각형 표시

    int height;

    printf("몇 단입니까 : "); scanf("%d",&height);

    for(int i=height;i>0;i--) 
    {
        for(int j=0;j<height-i;j++) {
            printf(" ");
        }
        for(int j=0;j<i;j++) {
            printf("*");
        }
        printf("\n");
    }

    return (0);
}