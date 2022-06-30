#include<stdio.h>

//입력받은 수의 제곱근 반환
int sqr(int x) {
    return (x*x);
}

//입력받은 값의 네제곱근 반환
//앞서 선언한 제곱근 반환합수를 이용
int pow4(int x) {
    //return (sqr(x)*sqr(x));
    return (sqr(sqr(x)));
}

int main(void) {
    int num;

    printf("정수를 입력해주세요.\n"); scanf("%d",&num);
    printf("이 수의 네제곱은 %d입니다.",pow4(num));

    return(0);
}