/*
    2행 3열의 배열과 3행 2열의 배열의 곱을 구하는 함수
*/
#include <stdio.h>

/* 2행 3열의 배열 ma와 3행 2열의 배열 mb의 곱을 mc에 저장 */
void mul(const int ma[2][3], const int mb[3][2], int mc[2][2]) { //
    int i, j, k;

    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            mc[i][j] = 0;
            for(k=0; k<3; k++) {
                mc[i][j] += ma[i][k] * mb[k][j];
            }
        }
    }
}

int main(void) {
    int i, j;
    int x[2][3] = { {1,2,3}, {4,5,6} };
    int y[3][2] = { {1,5}, {5,3}, {8,1} };
    int z[2][2];

    mul(x, y, z);

    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            printf("%3d", z[i][j]);
        }
        putchar('\n');
    }
    return(0);
}