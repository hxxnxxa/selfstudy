/* 이전 회의 프로그램 실행 날짜와 시간을 표시 (바이너리 사용) */

#include<time.h>
#include<stdio.h>

char data_file[] = "datetime.bin";

/*---이전 회의 날짜, 시간을 얻어서 표시 ---*/
void get_data(void) {
    FILE *fp;
    struct tm local;

    if ((fp=fopen(data_file, "rb"))==NULL) {
        printf("이 프로그램을 실행하는 것은 처음이군요.\n");
    } else {
        fread(&local, sizeof(struct tm), 1, fp);
        printf("이전 회의 날짜는 %d년 %d월 %d일 %d시 %d분 %d초 였습니다.\n",
                local.tm_year + 1900, local.tm_mon+1, local.tm_mday,
                local.tm_hour, local.tm_min, local.tm_sec);
        fclose(fp);
    }
}

/*--- 이번의 날짜, 시간을 쓴다 ---*/
void put_data(void) {
    FILE *fp;
    time_t t;
    struct tm *local;

    time(&t);
    local = localtime(&t);

    if((fp= fopen(data_file, "wb"))==NULL)
        printf("\a파일을 열 수 없습니다.\n");
    else {
        fwrite(local, sizeof(struct tm), 1, fp);
        fclose(fp);
    }
}

int main(void) {
    get_data();
    put_data();

    return(0);
}