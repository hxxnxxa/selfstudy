#include <stdio.h>

int main(void) {
    printf("정수를 입력해주세요 : \n");

    int num;
    int i = 0;
    int sum = 0;

    //wrong
    /**
    while(num!=9999) {
        printf("No.%d : ",i); scanf("%d",&num);
        i++;
        sum += num;
    }
    */

   //right answer
   do {
       printf("No. %d : ",++i); scanf("%d",&num);

       if(num!=9999) {
           sum += num;
       }
   } while(num!=9999);

   if(i>1) {
       printf("합계는 %d이고, 평균은 %.d 입니다.",sum,(double)sum/(i-1));
   }

    //printf("sum : %d\n",sum);
    //printf("num : %d\n",num);
    //printf("i : %d",i);

    return (0);
}