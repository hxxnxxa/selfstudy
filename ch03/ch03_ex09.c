#include <stdio.h>

int main(void) {
    int no1, no2, no3, no4;
    
    printf("네 개의 정수를 입력 해 주세요.\n");

    printf("정수 1 : "); scanf("%d",&no1);
    printf("정수 2 : "); scanf("%d",&no2);
    printf("정수 3 : "); scanf("%d",&no3);
    printf("정수 4 : "); scanf("%d",&no4);

    int max = no1;

    if(max<no2)
        max = no2;
    
    if(max<no3)
        max = no3;

    if(max<no4)
        max = no4;

    printf("최댓값은 %d입니다.",max);
}