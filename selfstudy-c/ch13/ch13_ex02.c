/* 
 * 키보드로부터 파일명을 읽어들여서 
 * 이 파일이 존재한다면 "이 파일은 존재합니다." 라고 표시 
 * 그렇지 않다면 "이 파일은 존재하지 않습니다" 라고 표시
 *  
 */

#include <stdio.h>

int main(void) {
    FILE *fp;
    char fname[64];

    printf("파일명 : "); scanf("%s", fname);

    fp = fopen(fname, "r");

    if (fp==NULL) {
        printf("이 파일은 존재하지 않습니다.\n");
    } else {
        printf("이 파일은 존재합니다.\n");
        fclose(fp);
    }

    return(0);
}

// -----------------------------------------------------------------
/*


*/