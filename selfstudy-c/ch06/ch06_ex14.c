#include <stdio.h>

//2행 3열의 배열 ma와 mb의 합을 mc에 저장하는 함수
void mat_add(const int ma[2][3], const int mb[2][3], int mc[2][3]) { //2행 3열의 배열 3개를 인자로 받을 것 이다.
    int i, j;

    for(i=0;i<2;i++) {                          //행 수 만큼 반복
        for(j=0;j<3;j++) {                      //열 수 만큼 반복
            mc[i][j] = ma[i][j] + mb[i][j];
        }
    }
}

int main(void) {
    int i,j;

    int ma[2][3] = { {1,2,3}, {4,5,6} };
    int mb[2][3] = { {6,3,4}, {5,1,2} };
    int mc[2][3] = { 0 };

    mat_add(ma, mb, mc);

    for(i=0;i<2;i++) {
        for(j=0;j<3;j++) {
            printf("%3d", mc[i][j]);
        }
        putchar('\n');
    }
    return (0);
}