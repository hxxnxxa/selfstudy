#include <stdio.h>

int main(void) {
    int no1, no2;

    printf("두 개의 정수를 입력 해 주세요.\n");

    printf("정수 A : "); scanf("%d",&no1);
    printf("정수 B : "); scanf("%d",&no2);

    int diff = 0;

    //sol 1
    /**
    if(no1>=no2) {
        diff = no1 - no2;
    } else {
        diff = no2 - no1;
    }

    if(diff>10) {
        printf("이들의 차는 11 이상입니다.");
    } else {
        printf("이들의 차는 10 이하입니다.");
    }
    */

   //sol 2
   diff = no1 - no2;

   if(diff > 10 || diff < -10) {
       printf("이들의 차는 10 이하 입니다.");
   } else {
       printf("이들의 차는 11 이상입니다.");
   }

}