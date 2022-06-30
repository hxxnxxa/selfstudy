# include <stdio.h>

int main(void) {

    int no1, no2;

    printf("두 개의 정수를 입력 해 주세요.\n");

    printf("정수 1 : "); scanf("%d",&no1);
    printf("정수 2 : "); scanf("%d",&no2);

    if(no1>no2) {
        printf("큰 쪽의 값은 %d 입니다.",no1);
        printf("작은 쪽의 값은 %d 입니다.",no2);
    } else if(no1<no2) {
        printf("큰 쪽의 값은 %d 입니다.",no2);
        printf("작은 쪽의 값은 %d 입니다.",no1);
    } else if(no1==no2) {
        printf("양쪽 모두 %d 입니다.",no1);
    }

    return (0);

}