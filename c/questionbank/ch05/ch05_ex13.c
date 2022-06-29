#include <stdio.h>
#define NUMBER 5    //사람수

int main(void) {
    double arr[NUMBER];
    double min, max;

    printf("체중을 입력해주세요.\n");

    for(int i=0;i<NUMBER;i++) {
        printf("%2d번 : ",(i+1)); scanf("%lf",&arr[i]);
    }

    min = max = arr[0];

    for(int i=1;i<NUMBER;i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    /**
     * @brief 
     * 
     * min = arr[0]
     * if (arr[0] > arr[0]) : max = arr[0]
     * if (arr[1] > arr[0]) : max = arr[1], max = arr[0]
     * ....
     * 
     */

    printf("가장 무거운 사람의 체중 : %.1f\n",max);
    printf("가장 가벼운 사람의 체중 : %.1f\n",min);

    return(0);
    
}