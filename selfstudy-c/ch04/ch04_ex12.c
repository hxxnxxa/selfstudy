#include <stdio.h>

int main(void) {
    int num;
    int start = 1;

    printf("정수를 입력해주세요 : "); scanf("%d",&num);

    // solution 1
    /**
    while(start<=num) {
        if(start%2==0) {
            printf("%d\t",start);
        }
        start++;
    }
    */

    // solution 2
    start = 2;
    while(start<=num) {
        printf("%d\t",start);
        start *= 2;
    }
    putchar('\n');

    return (0);
}