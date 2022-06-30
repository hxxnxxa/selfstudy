#include <stdio.h>

int main(void) {
    int no;

    printf("정수를 입력해주세요 : "); scanf("%d",&no);

    printf("10을 더하면 %d입니다.\n",no+10);
    printf("10을 빼면 %d입니다.\n",no-10);
    printf("10을 곱하면 %d입니다.\n",no*10);
    printf("10을 나눈 몫은 %d입니다.\n",no/10);
    printf("10을 나눈 나머지는 %d입니다.\n",no%10);
}