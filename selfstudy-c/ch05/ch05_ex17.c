#include<stdio.h>
#define MAX 1000 //최대 1000개

int main(void) {
    int arr[MAX] = { 0 };
    int i = 0;
    int sum = 0;

    puts("정수를 입력해주세요.");

    while(i<MAX) {
        printf("No. %d : ", i+1); scanf("%d", &arr[i]);

        if(arr[i]==9999) {
            i++;
            break;
        }
        sum+=arr[i++];
    }

    if(i>1){
        printf("합계는 %d이고 평균은 %.2f입니다.\n", sum, (double)sum/(i-1));
    }
}