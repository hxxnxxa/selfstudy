#include <stdio.h>

int main(void) {
    int num;

    printf("몇 단 입니까?"); scanf("%d",&num);


    //왼쪽 아래가 직각인 직각 삼각형 표시
    /**
    for(int j=0;j<num;j++) {
        for(int i=0;i<=j;i++) {
            printf("*");
        }
        printf("\n");
    }
    */

   //오른쪽 아래가 직각인 직각삼각형 표시
   for(int i=1;i<=num;i++) {
       for(int j=1; j<=num-i;j++) {
           putchar(' ');
       }
       for(int j=1;j<=i;j++) {
           putchar('*');
       }
       putchar('\n');
   }

    return (0);
}