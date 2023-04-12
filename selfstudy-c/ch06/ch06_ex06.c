#include <stdio.h>

//알람 울리는 함수
void alert(int no) {
    while(no-->0) {
        putchar('\a');
    }
}

//입력한 수 만큼 알람 울리기
int main(void) {
    int x;

    printf("정수를 입력해주세요 : "); scanf("%d",&x);
    alert(x);

    return(0);
}