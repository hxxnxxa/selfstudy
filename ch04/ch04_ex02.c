#include <stdio.h>

int main(void) {
    
    //입력받은 수를 저장할 변수 선언
    int num; 
    
    //do-while문을 이용하여 음수를 입력한 경우 재입력 요구하기
    do {
        printf("음수가 아닌 정수를 입력해주세요 : "); scanf("%d",&num);
        if(num<0)
            puts("음수를 입력하지 말아주세요.");
    } while(num<0);

    printf("%d을 역순으로 읽으면",num);

    //정수값을 읽어들여 그 값을 역순으로 표시하기
    do{
        printf("%d", num%10);
        num = num / 10;
    } while(num>0);
    puts("입니다.\n");

    return (0);
}

/**
 * @brief 
 * 
 * 1963을 읽은 경우 
 * 1963 % 10 = 3 출력
 * 1963 / 10 = 196 을 num에 저장
 * 196 % 10 = 6 출력
 * 196 / 10 = 19 를 num에 저장
 * 19 % 10 = 9 출력
 * 19 / 10 = 1 을 num에 저장
 * 1 % 10 = 1 출력
 * 1 / 10 = 0.1 을 num에 저장
 * 0.1 % 10 = 
 * 
 */