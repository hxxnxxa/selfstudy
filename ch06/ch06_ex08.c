#include <stdio.h>

//입력한 수 만큼 * 출력
void put_stars(int no) {
    while(no-->0) {
        putchar('*');
    }
}

//put_starts()함수를 사용하여 직사각형 그리기
int main(void) {
    int width;
    int height;

    printf("직사각형을 만들어봅시다.\n");
    printf("너비 : "); scanf("%d",&width);
    printf("높이 : "); scanf("%d",&height);

    for(int i=0;i<height;i++){
        put_stars(width);
        putchar('\n');
    }

    return(0);
}