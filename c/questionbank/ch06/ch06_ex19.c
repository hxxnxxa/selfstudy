/*
    정적기억기간을 갖는 배열 오브젝트의 암묵적인 초기화를 확인
*/
#include <stdio.h>

int a[3]; // 정적기억기간(모든 요소가 0으로 초기화된다)

int main(void) {
    int i;
    static int b[3]; // 정적기억기간 (모든 요소가 0으로 초기화된다.)
    int c[3];        // 자동기억기간 (알 수 없는 값으로 초기화된다.)

    printf("a ");
    for(i=0; i<3; i++) {
        printf("%4d", a[i]);
    }
    putchar('\n');

    printf("b ");
    for(i=0; i<3; i++) {
        printf("%4d", b[i]);
    }
    putchar('\n');

    printf("c ");
    for(i=0; i<3; i++) {
        printf("%4d", c[i]);
    }
    putchar('\n');

    return (0);
    
}