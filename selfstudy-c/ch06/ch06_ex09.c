#include <stdio.h>

//받은 인자값만큼 ch를 표시하는 함수
void put_nchar(char ch, int no) {
    while(no-->0) {
        putchar(ch);
    }
}

//put_nchar()함수를 사용하여 평행사변형 그리기 
int main(void) {
    int width;
    int height;

    puts("평행사변형을 그려봅시다.");

    printf("너비 : "); scanf("%d",&width);  //width값 입력받기
    printf("높이 : "); scanf("%d",&height); //height값 입력받기

    for(int i=0;i<height;i++) {            //종료시점은 i가 height 초과일 때
        put_nchar(' ',height-i);           //height-i 만큼 공백 표시
        put_nchar('+',width);              //입력받은 width만큼 + 표시
        putchar('\n');                     //입력받은 width만큼 + 표시했으면 개행
    }
    return(0);
}