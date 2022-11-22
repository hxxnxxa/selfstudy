#include <stdio.h>
int main(void) {
    int score[5] = {0};  //전 요소를 0으로 초기화
    int sum = 0;       //합계점

    printf("점수를 입력 해 주세요.\n");

    for(int i=0;i<5;i++) {
        printf("%d번 : ",(i+1)); scanf("%d",&score[i]);
        sum = sum + score[i];
    }

    printf("합계점 : %5d\n", sum);
    printf("평균점 : %5.1f\n", ((double)sum/5));

    return(0);
}