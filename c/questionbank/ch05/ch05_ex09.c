#include <stdio.h>
int main(void) {
    int vx[7] = {0};

    for(int i=0;i<7;i++) {
        printf("vx[%d] = ",i); scanf("%d",&vx[i]);
    }

    for(int i=0;i<7;i++) {
        printf("vx[%d] = %d\n",(i),vx[6-i]);
    }

    return(0);
}