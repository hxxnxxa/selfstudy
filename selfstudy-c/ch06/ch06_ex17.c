/* 
    점수를 읽어들여 합격자(60점 이상)의 일람을 표시
*/

#include <stdio.h>

int tensu[5];

void prt(int ten);

int main(void) {
    extern int tensu[];
    int i;

    puts("5인의 점수를 입력해주세요.");

    for(i=0; i<5; i++) {
        printf("%d : ", i + 1); scanf("%d", &tensu[i]);
    }

    puts(" 합격자 일람표 ");
    puts("---------------");
    prt(60);

    return (0);
}

/* 배열 tensu 중에서 값이 ten 이상인 요소를 표시 */
void prt(int ten) {
    extern int tensu[];
    int i;

    for(i=0; i<5; i++) {
        if(tensu[i]<ten) 
            ;
        else
            printf("tensu[%d] = %d \n", i, tensu[i]);
    }
}