#include <stdio.h>

int main(void) {
    int num;
    int temp;
    int count = 0;

    //음수를 읽어들인 경우 재입력 요구하기
    do {
        printf("음수가 아닌 수를 입력해주세요 : "); scanf("%d",&num);

        if(num<0)
            puts("음수를 입력하지 말아주세요.\n");
    } while(num<0);

    printf("%d은(는)",num);

    temp = num; 

    //자릿수를 표시하기
    do {
        temp /= 10;
        count++;
    } while(temp>0);

    printf("%d자리입니다.",count);

    return (0);
}