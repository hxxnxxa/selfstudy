#include <stdio.h>

int main(void) {
    int height;
    int width;
    int num;

    printf("직사각형을 만들어봅시다.\n");
    printf("가로 : "); scanf("%d",&width);
    printf("세로 : "); scanf("%d",&height);
    printf("개수 : "); scanf("%d",&num);

    for(int i=1; i<=height; i++) {
        for(int n=1; n<=num; n++) {
            for(int j=1; j<=width; j++)
                printf("*");
            if(n<num)
                printf(" ");
        }  
        printf("\n");
    }
    return(0);
}