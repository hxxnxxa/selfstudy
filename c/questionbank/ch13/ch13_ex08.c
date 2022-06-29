/* 키보드로부터 파일명을 읽어들여서 이 파일 중의 숫자 문자 개수를 카운트해서 화면에 표시 */

#include<stdio.h>

int main(void) {
    int i, ch;
    FILE *fp;
    char fname[64];
    int cnt[10] = {0};

    printf("파일명 : "); scanf("%s",fname);

    if((fp=fopen(fname, "r"))==NULL) {
        printf("\a파일을 열 수 없습니다.\n");
    } else {
        while((ch=fgetc(fp))!=EOF)
            if(ch>='0' && ch <='9') {
                cnt[ch - '0']++;
            }
        puts("숫자 문자의 출현 횟수");
        for(i=0; i<10; i++) {
            printf("%d : %d\n",i, cnt[i]);
        }
        fclose(fp);
    }
    return(0);
}