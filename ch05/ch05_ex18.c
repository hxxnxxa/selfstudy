#include<stdio.h>
#define MAX 5

int main(void) {
    int i, j;
    int va[] = {10, 20, 30, 40, 50};
    int vb[] = {99, 88, 77, 66, 55};

    for(i=0, j=MAX-1; i<MAX; i++, j--) {
        printf("va[%d] = %d, vb[%d]=%d, 합: %d\n", i, va[i], j, vb[j], va[i]+vb[j]);
    }

    return(0);
}