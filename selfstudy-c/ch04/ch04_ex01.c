#include <stdio.h>

int main(void) {
    int cont;

    do {

        int no;
        
        printf("정수를 입력해주세요 : "); scanf("%d",&no);

        if(no%10) 
            puts("이 수는 10으로 나누어지지 않습니다.");
        else 
            puts("이 수는 10으로 나누어집니다.");

        printf("한 번 더 ? YES는 0, NO는 9 : "); scanf("%d",&cont);

    } while(cont==0); 
    //while(cont !=0  && cont != 9);

    return (0);
}