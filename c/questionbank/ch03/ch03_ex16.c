#include <stdio.h>

int main(void) {
    int score;

    printf("점수를 입력해주세요 : "); scanf("%d",&score);

    if(score<60) { //60점 미만
        printf("평가는 불가입니다.");
    } else if(score>=60 && score<70) { //60~69점
        printf("평가는 가입니다.");
    } else if(score>=70 && score<80) { //70~79점
        printf("평가는 양입니다.");
    } else if(score>=80 && score<=100) { //80~100점
        printf("평가는 우수입니다.");
    } else {
        printf("평가할 수 없습니다.");
    }

    return (0);   
}