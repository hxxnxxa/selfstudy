#include <stdio.h>

int main(void) {
    int no1, no2, no3;
    printf("세 개의 정수를 입력해주세요.\n");

    printf("정수 1 : "); scanf("%d",&no1);
    printf("정수 2 : "); scanf("%d",&no2);
    printf("정수 3 : "); scanf("%d",&no3);

    int min = no1;

    if(min>no2)
        min = no2;
    
    if(min>no3)
        min = no3;

    printf("최소값은 %d입니다.",min);

    return (0);

}