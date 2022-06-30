#include <stdio.h>

int main(void) {
    int no;

    printf("정수를 입력해주세요 : "); scanf("%d",&no);

/*
    if(no==0) 
        puts("제로를 입력했군요.");
    else
        puts("제로 이외의 값을 입력했군요.");

    return (0);
*/
    if(no) 
        puts("제로 이외의 값을 입력했군요.");
    else 
        puts("제로를 입력했군요.");
}