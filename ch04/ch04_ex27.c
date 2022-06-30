#include <stdio.h>

/**
 * @brief 
 * 
 * result
 * 
 *              *
 *             ***
 *            *****
 * 
 * @return int 
 */
int main(void) {
    int num;

    printf("피라미드를 만들어봅시다.\n몇 단입니까 : "); scanf("%d",&num);

    for(int i=1;i<=num;i++) {           //i행(i=1, 2, ... , num)
        for(int j=1;j<=num-i;j++) {     //height - i개의 공백 표시
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++) {     //i * 2 - 1 개의 *  표시
            printf("*");
        }
        printf("\n");
    }
    return (0);
}