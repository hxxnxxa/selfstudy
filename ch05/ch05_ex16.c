#include<stdio.h>
int main(void) {
    int mx[2][3] = { {1,2,3}, {4,5,6} };
    int my[3][2] = { {1,5}, {5,3}, {8,1} };
    int mz[2][2] = { 0 };

    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            mz[i][j] = 0;
            for(int k=0;k<3;k++) {
                mz[i][j] += mx[i][k] * my[k][j];
            }
        }
    }

    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            printf("%5d",mz[i][j]);
        }
        printf("\n");
    }

    return(0);
}