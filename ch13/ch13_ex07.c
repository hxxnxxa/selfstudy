/* 키보드로부터 파일명을 읽어들여서 이 파일의 행 수를 카운트해서 화면에 표시 */

#include <stdio.h>

int main(void) {
    int i, j, ch;
    FILE *fp;
    char fname[64];
    int n_count = 0;

    printf("파일명 : "); scanf("%s", &fname);

    if((fp=fopen(fname,"r"))==NULL) {
        printf("\a파일을 열 수 없습니다.\n");
    } else {
        while((ch=fgetc(fp))!=EOF)
            if(ch=='\n')
                n_count++;

        printf("이 파일은 %d행입니다.\n", n_count);
        fclose(fp);
    }
    return(0);
}