#include <stdio.h>
int main(void) {
    int va[5] = {15, 20, 30};
    int vb[5] = {0};

    //va = {15, 20, 30, 0, 0}
    //vb = {0, 0, 30, 20, 15}

    for(int i=0;i<5;i++) {
        vb[i] = va[4-i];
    }

    printf("va\tvb\n");
    printf("-------------\n");

    for(int i=0;i<5;i++) {
        printf("%d\t%d\n",va[i],vb[i]);
    }

    return(0);
}