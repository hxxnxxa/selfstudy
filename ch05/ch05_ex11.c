#include <stdio.h>
int main(void) {
    int arr[5] = {0};
    int sum = 0;

    printf("신장을 입력해주세요.\n");

    for(int i=0;i<5;i++) {
        printf("%d번 : ",i+1); scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }

    printf("평균신장 : %.1f",(double)sum/5);
    
    return(0);

}