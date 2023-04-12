#include <stdio.h>

int main(void) {
    int nx = 5/2;
    double dy = 5.0/2.0;

    printf("nx = %d\n",nx);
    printf("dy = %lf\n",dy);

    printf("\n");

    printf("5   /   2       = %d\n",nx);
    printf("5   /   2.0     = %lf\n",(5/2.0));
    printf("5   *   2.0     = %lf\n",(5*2.0));

    printf("\n");

    printf("5   / nx = %d\n",nx);
    printf("5   / dy = %lf\n",(5/2.0));
    printf("5.0 / nx = %lf\n",(5.0/2));
    printf("5.0 / dy = %lf\n",(5.0/2.5));
    printf("nx  / dy = %lf\n",((5/2)/(5.0/2.0)));

    return (0);
}