#include <stdio.h>

int main(void) {
    int num;
    int start = 1;

    printf("정수를 입력해주세요 : "); scanf("%d",&num);

    while(start<=num) {
        if(start%2==0) {
            printf("%d ", start);
        }
        start++;
    }

    return (0);
}