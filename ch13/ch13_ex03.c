/* 파일 유무 체크 */

#include <stdio.h>

int fexist(const char *filename) {
    FILE *fp;

    if((fp=fopen(filename, "r"))==NULL)
        return(0);

    fclose(fp);
    return(1);
}

int main(void) {
    FILE *fp;
    char fname[64];

    printf("파일명 : "); scanf("%s", fname);

    if(fexist(fname)) {
        printf("이 파일은 존재합니다.\n");
    } else {
        printf("이 파일은 존재하지 않습니다.\n");
    }

    return(0);
}