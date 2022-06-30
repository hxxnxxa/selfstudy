#include <stdio.h>

int main(void) {
    int num;
    
    //음수를 읽어들인 경우 재입력 요구하기 
    do {
        printf("음수가 아닌 정수를 입력해주세요 : "); scanf("%d",&num);

        if(num<0) 
            puts("음수를 입력하지 말아주세요.\n");

    } while(num<0);

    printf("%d를 역순으로 읽으면 ",num);

    //읽어들인 정수값을 역순으로 표시하기
    do {
        printf("%d",(num%10));
        num /= 10;
    } while(num>0);

    printf("입니다.\n");

    return (0);
}