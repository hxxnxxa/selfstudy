#include <stdio.h>

int main(void) {

    int num;
    int start = 0;
    
    printf("정수를 입력 해 주세요 : "); scanf("%d",&num);

    if(num>=0) {

        //do-while문
        /**
        do {
            printf("%d\t",num);
            num--;
        } while(num>=0);
        */

        //while문
        while(num>=0) {
            printf("%d ",num);
            num--;
        }
        printf("\n");
    }

    return(0);
}