#include <stdio.h>

int main(void) {
    int num;
    int start = 1;

    printf("양의 정수를 입력해주세요 : "); scanf("%d",&num);

    if(num>=0) {
        while(start<=num) {
            printf("%d ",start);
            start++;
        }
    }
    
    return (0);
}