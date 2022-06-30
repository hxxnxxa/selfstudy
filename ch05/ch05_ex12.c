#include <stdio.h>
#define NUMBER 5 //macro

int main(void) {
    int i;
    int sum = 0;
    int height[NUMBER];

    printf("신장을 입력해주세요.\n");

    for(int i=0; i<NUMBER; i++) {
        printf("%2d번 : ", i+1); scanf("%d", &height[i]);
        sum += height[i];
    }

    printf("평균신장 : %5.1f\n", (double)sum/NUMBER);

    return(0);
}