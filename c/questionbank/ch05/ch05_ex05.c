#include <stdio.h>

int main(void) {
    
    int arr[5] = {5, 4, 3, 2, 1};

    for(int j=0; j<5; j++) {
        printf("arr[%d] = %d\n", j, arr[j]);
    }

    return(0);
}