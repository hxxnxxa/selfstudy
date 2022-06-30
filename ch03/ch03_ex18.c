#include <stdio.h>

int main(void) {
    int month;

    printf("몇 월 입니까 : "); scanf("%d",&month);

    // solution 1
    /**
    if(month==3 || month==4 || month==5) {
        printf("봄입니다.\n");
    } else if(month==6 || month==7 || month==8) {
        printf("여름입니다.\n");
    } else if(month==9 || month==10 || month==11) {
        printf("가을입니다.\n");
    } else if(month==12 || month==1 || month==2) {
        printf("겨울입니다.\n");
    } else {
        printf("그런 월은 없습니다.\n");
    }
    */

   // solution 2
   if(month>=3 && month<=5) {
       printf("봄입니다.\n");
   } else if(month>=6 && month<=8) {
       printf("여름입니다.\n");
   } else if(month>=9 && month<=12) {
       printf("가을입니다.\n");
   } else if(month==1 || month==2 || month==3) {
       printf("겨울입니다.\n");
   } else {
       printf("그런 월은 없습니다.\n");
   }

    return (0);
}