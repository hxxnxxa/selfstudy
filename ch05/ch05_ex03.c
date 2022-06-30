#include <stdio.h>

int main(void) {

    int arr[5];

    for(int i=4; i>=0; i--) {
        arr[i] = 5 - i;
        //arr[4] = 1
        //arr[3] = 2
        //arr[2] = 3
        //arr[1] = 4
        //arr[0] = 5
    }

    for(int j=0; j<5; j++) {
        printf("arr[%d] = %d\n", j, arr[j]);
    }
}