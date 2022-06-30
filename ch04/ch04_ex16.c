#include <stdio.h>

int main(void) {
    int sum = 0;

    for(int i=1;i<=5;i++) {
        sum+=i;
    }

    printf("1부터 5까지 더하면 %d 입니다.",sum);

    return (0);

}