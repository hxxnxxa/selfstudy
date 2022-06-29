#include <stdio.h>

//입력받은 두 수의 합을 구하는 함수
int sum(int x, int y) {
    return x+y;
}

//입력받은 두 수의 차를 구하는 함수
int diff(int x, int y) {
    if(x>y) {
        return (x-y);
    } else {
        return (y-x);
    }
}

int main(void) {
    int a, b;

    puts("두 개의 정수를 입력해주세요.");

    printf("정수 A : "); scanf("%d",&a);
    printf("정수 B : "); scanf("%d",&b);

    printf("두 정수의 합은 %d입니다.",sum(a,b));
    printf("두 정수의 차는 %d입니다.",diff(a,b));

    return(0);
}

