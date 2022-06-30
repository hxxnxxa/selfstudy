/* 요소 형이 double 형이고 요소 수가 10인 배열의 모든 요소값을 쓰는 프로그램 */

#include <stdio.h>
#define ARY_SIZE 10

int main(void) {
    int i;
    FILE *fp;
    double a[ARY_SIZE] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0};

    if ((fp = fopen("ARRAY.bin", "wb")) == NULL)
        printf("\a파일을 열 수 없습니다.\n");
    else {
        fwrite(a, sizeof(double), ARY_SIZE, fp);
        fclose(fp);
    }

    if((fp=fopen("ARRAY.bin", "rb")) == NULL)
        printf("\a파일을 열 수 없습니다.\n");
    else {
        fread(a, sizeof(double), ARY_SIZE, fp);
        for(i=0; i<ARY_SIZE; i++) {
            printf("a[%d] = %f\n", i, a[i]);
        }
        fclose(fp);
    }
    return(0);
}