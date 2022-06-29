#include <stdio.h>

int main(void) {
    int no1, no2;
    int sum = 0;
    int count = 1;
    int tmp, max, min;

    printf("두 개의 정수를 입력해주세요.\n"); 
    printf("정수1 : "); scanf("%d",&no1);
    printf("정수2 : "); scanf("%d",&no2);

    if(no1>no2) {
        max = no1;
        min = no2;
    } else {
        max = no2;
        min = no1;
    }

    printf("최댓값 : %d\n",max);
    printf("최솟값 : %d\n",min);

    count = min;

    do {
        sum += count;
        count += 1;
    } while(max>=count);

    printf("%d 이상 %d 이하의 모든 정수의 합은 %d 입니다.",min,max,sum);
}