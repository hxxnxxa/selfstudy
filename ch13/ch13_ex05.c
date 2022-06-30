/* 키보드로부터 읽어들인 이름, 신장, 체중을 파일에 쓴다. */

#include <stdio.h>

int main(void) {
    FILE *fp;
    int retry;              // 계속 할 것인가?
    char fname[100];        // 파일명
    char name[100];         // 이름
    double height, weight;  // 신장, 체중

    printf("쓸 파일명 : "); scanf("%s", fname);

    if((fp=fopen(fname, "w")) == NULL) { //파일 열기
        printf("\a파일을 열 수 없습니다.\n");
    } else {
        do {
            printf("이름 : "); scanf("%s", name);
            printf("신장 : "); scanf("%lf",&height);
            printf("체중 : "); scanf("%lf",&weight);
            fprintf(fp, "%s %f\n", name, height, weight);

            printf("계속합니까?(Yes-1, No-2) : "); scanf("%d", &retry);
        } while(retry==1);

        fclose(fp);
    }
    return(0);
}