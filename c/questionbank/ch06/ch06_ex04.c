#include <stdio.h>

//입력받은 수의 세제곱을 반환하는 함수
int cube(int x) {
    return (x*x*x);
}

int main(void) {
    int num;

    printf("정수를 입력해주세요 : "); scanf("%d",&num);
    printf("이 수의 세제곱은 %d입니다.",cube(num));

    return(0);

}