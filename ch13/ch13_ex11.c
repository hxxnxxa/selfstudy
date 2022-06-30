/* 복사할 파일명, 복사하는 파일명을 키보드로부터 읽어들여서 모든 영대문자를 영소문자로 변환하면서 복사하는 프로그램 */

#include<stdio.h>
#include<ctype.h>

int main(void) {
    int ch;
    FILE *sfp, *dfp;
    char sname[64], dname[64];

    printf("복사할 파일 : "); scanf("%s", sname);
    printf("복사하는 파일 : "); scanf("%s", dname);

    if((sfp = fopen(sname, "r")) == NULL) 
        printf("\a복사할 파일을 열 수 없습니다.\n");
    else {
        if((dfp = fopen(dname, "w")) == NULL)
            printf("\a복사할 파일을 열 수 없습니다.\n");
        else {
            while((ch=fgetc(sfp))!=EOF)
                fputc(tolower(ch), dfp);
            fclose(dfp);
        }
        fclose(sfp);
    }
    return(0);
}