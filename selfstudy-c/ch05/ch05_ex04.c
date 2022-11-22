#include <stdio.h>

int main(void) {
    double arr[11];
    double start = 0.0;

    for(int i=0; i<11; i++) {
        arr[i] = i / 10.0;
    }

    for(int j=0; j<11; j++) {
        printf("arr[%d] = %.1f\n",j,arr[j]);
    }

    return(0);

    /*
    arr[0] = 0.0
    arr[1] = 0.1
    arr[2] = 0.2
    arr[3] = 0.3
    arr[4] = 0.4
    arr[5] = 0.5
    arr[6] = 0.6
    arr[7] = 0.7
    arr[8] = 0.8
    arr[9] = 0.9
    arr[10] = 1.0

    arr[i] = i * 0.1
    arr[i] = i / 10.0
    */
}