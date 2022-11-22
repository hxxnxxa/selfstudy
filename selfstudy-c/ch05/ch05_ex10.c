#include <stdio.h>
int main(void) {
    int vx[8] = {0};

    for(int i=0;i<8;i++) {
        printf("vx[%d] = ",i); scanf("%d",&vx[i]);
    }

    for(int i=0;i<8;i++) {
        printf("vx[%d] = %d\n",i,vx[7-i]);
    }

    return(0);
}