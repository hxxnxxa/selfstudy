#include <stdio.h>
int main(void) {
    int ma[2][3] = { {1,2,3},{4,5,6}};
    int mb[2][3] = { {6,3,4},{5,1,2}};
    int mc[2][3] = {0};

    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            mc[i][j] = ma[i][j] + mb[i][j];
        }
    }

    for(int i=0;i<2;i++) {
        for(int j=0;j<3;j++) {
            printf("%3d",mc[i][j]);
        }
        printf("\n");
    }

    return(0);
}