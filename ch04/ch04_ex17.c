#include <stdio.h>

int main(void) {
    int num;
    int i;
    int count=1;

    printf("정수를 입력해주세요 : "); scanf("%d",&num);

    //wrong answer
    /**
    while(count<=num) {
        for(i=0;i<10;i++) {
            printf("%d",i);
            count++;
        }
    }
    */

   for(i=1;i<=num;i++) {
       printf("%d",i%10);
   }

   putchar('\n');

    return (0);
}