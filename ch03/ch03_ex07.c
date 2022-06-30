#include <stdio.h>

int main(void) {
    int no1;
    int no2;

    printf("두 개의 정수를 입력해주세요.\n");
    printf("정수 A : "); scanf("%d",&no1);
    printf("정수 B : "); scanf("%d",&no2);

    if(no1>no2) 
        printf("A는 B보다 큽니다.");
    else if(no1<no2)
        printf("A는 B보다 작습니다.");
    else if(no1==no2)
        printf("A는 B와 같습니다.");

    return (0);
}