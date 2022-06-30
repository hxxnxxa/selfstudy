/* 복사할 파일명, 복사하는 파일명을 키보드로부터 읽어들여서 파일의 내용을 화면에 출력하면서 복사하는 프로그램 */

#include<stdio.h>

int main(void) {
    int ch;
    FILE *sfp, *dfp;
    char sname[64], dname[64];

    printf("복사할 파일 : "); scanf("%s", sname);
    printf("복사하는 파일 : "); scanf("%s", dname);

    if((sfp=fopen(sname, "r"))==NULL)
        printf("\a복사할 파일을 열 수 없습니다.\n");
    else {
        if((dfp=fopen(dname,"w"))==NULL)
            printf("\a복사하는 파일을 열 수 없습니다.\n");
        else {
            while((ch=fgetc(sfp))!=EOF) {
                putchar(ch);
                fputc(ch, dfp);
            }
            fclose(dfp);
        }
        fclose(sfp);    
    }
    return (0);    
}