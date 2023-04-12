#include <stdio.h>

int main(void) {
    int month;

    printf("몇 월입니까 : "); scanf("%d",&month);

    //wrong
    /**
    switch(month) {
        case 3,4,5 : puts("봄입니다.\n"); break;
        case 6,7,8 : puts("여름입니다.\n"); break;
        case 9,10,11 : puts("가을입니다.\n"); break;
        case 12,1,2 : puts("겨울입니다.\n"); break;
    }
    */

    //right
    switch(month) {
        case 3 :
        case 4 :
        case 5 : puts("봄입니다.\n"); break;
        case 6 : 
        case 7 : 
        case 8 : puts("여름입니다.\n"); break;
        case 9 :
        case 10 : 
        case 11 : puts("가을입니다.\n"); break;
        case 12 : 
        case 1 : 
        case 2 : puts("겨울입니다.\n"); break;
        default : puts("그런 월은 없습니다.\a"); break;
    }

    return (0);
}