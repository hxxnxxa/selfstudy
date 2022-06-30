#include <stdio.h>

//세 수를 입력받아 가장 작은 값 반환하기
int min3(int x, int y, int z) {
    int min = x; //가장 처음 입력받은 값을 임의의 변수에 저장한다.
    
    if(min>y) {
        min = y;
    }
    if(min>z) {
        min = z;
    }
    
    return min;
}

int main(void) {
    int na, nb, nc;

    puts("세 개의 정수를 입력해주세요.");

    printf("정수 1 : "); scanf("%d",&na);
    printf("정수 2 : "); scanf("%d",&nb);
    printf("정수 3 : "); scanf("%d",&nc);

    printf("가장 작은 값은 %d입니다.",min3(na,nb,nc));

    return(0);
}