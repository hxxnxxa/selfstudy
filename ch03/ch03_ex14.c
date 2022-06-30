#include <stdio.h>

int main(void) {
    printf("세 개의 정수를 입력해주세요.\n");

    int no1, no2, no3;

    printf("정수 A : "); scanf("%d",&no1);
    printf("정수 B : "); scanf("%d",&no2);
    printf("정수 C : "); scanf("%d",&no3);

    if(no1==no2 && no2==no3) { //세 개의 값이 모두 같다면
        printf("세 개의 값이 같습니다.");
    } else if(no1 == no2 || no2 == no3 || no3 == no1) { //두 개의 값이 같다면
        printf("두 개의 값이 같습니다.");
    } else { //위의 두 조건 모두 만족하지 못하면
        printf("세 개의 값이 모두 다릅니다.");
    }
    
}