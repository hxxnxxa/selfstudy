#include <stdio.h>

int main(void) {
    int no;

    printf("정수를 입력해주세요 : "); scanf("%d",&no);

    if(no<0)
        no = -no; 

    printf("절대값은 %d 입니다.",no);

    return (0);
}