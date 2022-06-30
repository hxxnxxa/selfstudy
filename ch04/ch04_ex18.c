#include <stdio.h>

int main(void) {
    // ((double)height-100)*0.9

    int start;
    int end;
    int num;

    printf("몇 cm부터 : "); scanf("%d",&start);
    printf("몇 cm까지 : "); scanf("%d",&end);
    printf("몇 cm마다 : "); scanf("%d",&num);

    for(int i=start; i<=end; i+=num) {
        printf("%d\t%.2lf\n",i,((double)i-100)*0.9);
    }

    return (0);

}