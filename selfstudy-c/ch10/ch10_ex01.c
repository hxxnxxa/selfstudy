#include<stdio.h>

int nx;

int main(void) {
    static double dx;
    static int vc[3];

    printf("nx의 어드레스 : %p\n", &nx);
    printf("dx의 어드레스 : %p\n", &dx);
    printf("vc[0]의 어드레스 : %p\n", &vc[0]);
    printf("vc[1]의 어드레스 : %p\n", &vc[1]);
    printf("vc[2]의 어드레스 : %p\n", &vc[2]);

    return 0;
}