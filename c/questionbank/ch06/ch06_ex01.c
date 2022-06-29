#include <stdio.h>

//최솟값 반환
int minof(int x, int y) {
    if(x>y) {
        return y;
    } else {
        return x;
    }
}

int main(void) {
    
    int x;
    int y;

    puts("두 개의 정수를 입력해주세요.");

    printf("정수 1 : "); scanf("%d",&x);
    printf("정수 2 : "); scanf("%d",&y);

    printf("작은쪽의 값은 %d입니다.",minof(x,y));

    return(0);
}