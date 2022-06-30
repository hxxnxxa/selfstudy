#include <stdio.h>

int main(void) {
    int num, tmp;
    int count;
    
    //음수를 읽어들인 경우 재입력 요구하기
    do {
        printf("음수가 아닌 수를 입력해주세요 : "); scanf("%d",&num);
        if(num<0) {
            printf("음수를 입력하지 말아주세요.\n");
        }
    } while(num<0); //while의 조건은 false인 경우가 해당된다.


    tmp = num; 
    count = 0;

    //자릿수 계산해서 출력하기
    do {
        tmp = tmp / 10; //10으로 나누면 읽어들인 수의 자릿수가 -1 씩 감소한다.
        count = count + 1; //자릿수를 세는 변수는 +1 씩 증가한다.
        //printf("%d\n",tmp);
    } while(tmp>0); //조건식이 false일 경우 반복문 종료, 여기서는 tmp가 0보다 큰게 false일 경우 종료

    printf("%d는 %d자리입니다.",num,count);

    return (0);
}