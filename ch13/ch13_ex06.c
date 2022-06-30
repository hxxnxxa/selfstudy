/* 이전 회의 프로그램 실행 시 "기분"과 날짜, 시각을 표시한다. */

#include<time.h>
#include<stdio.h>

char data_file[] = "kibun.dat";

/*--- 이전 회의 기분, 날짜, 시각을 얻어서 표시 ---*/
void get_data(void) {
    FILE *fp;

    if((fp=fopen(data_file, "r")) == NULL)
        printf("이 프로그램을 실행하는 것은 처음이군요.\n");
    else {
        int year, month, day, h, m, s;
        char kibun[100];

        fscanf(fp, "%d%d%d%d%d%d", &year, &month, &day, &h, &m, &s);
        fscanf(fp, "%s", kibun);
        printf("전회는 %d년 %d월 %d일 %d시 %d분 %d초이고, 기분은 %s였습니다.\n", year, month, day, h, m, s, kibun);
        fclose(fp);
    }
}

/*--- 이번의 기분, 날짜, 시간을 쓴다. ---*/
void put_data(char kibun[]) {
    FILE *fp;
    time_t t;
    struct tm *local;

    time(&t);
    local = localtime(&t);

    if((fp=fopen(data_file, "w"))==NULL) {
        printf("\a파일을 열 수 없습니다.\n");
    } else {
        fprintf(fp, "%d %d %d %d %d %d\n", local->tm_year + 1900, local->tm_mon+1, local->tm_mday, local->tm_hour, local->tm_min, local->tm_sec);
        fprintf(fp, "%s\n", kibun);
        fclose(fp);
    }
}

int main(void) {
    char kibun[100];
    get_data();

    printf("현재의 기분은 : ");
    scanf("%s", kibun);

    put_data(kibun);

    return(0);
}