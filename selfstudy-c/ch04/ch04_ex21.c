#include <stdio.h>

int main(void) {
    printf("직사각형을 만들어봅시다.\n");

    int weight;
    int height;

    printf("가로 : "); scanf("%d",&weight);
    printf("세로 : "); scanf("%d",&height);

    for(int j=0;j<height;j++) {
        for(int i=0;i<weight;i++) {
            printf("*");
        }
        printf("\n");
    }
}