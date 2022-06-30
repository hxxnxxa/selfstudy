/*
    5명 학생의 세 과목 점수를 처리
*/

#include <stdio.h>

#define STD_NO 5
#define SUB_NO 3

/* 과목 sub의 최고점, 최저점을 구한다. */
int top_sub(int v[][SUB_NO], int sub, int sw) {
    int i;
    int tmp = v[0][sub];

    for(i=1; i<STD_NO; i++) {
        if(sw) {
            if(v[i][sub] > tmp) {
                tmp = v[i][sub];
            } else {
                if(v[i][sub] < tmp) {
                    tmp = v[i][sub];
                }
            }
        }
    }
    return (tmp);
}

/* 과목 sub의 합계점을 구한다. */
int sum_sub(int v[][SUB_NO], int sub) {
    int i;
    int sum = 0;

    for(i=0; i<STD_NO; i++) {
        sum += v[i][sub];
    }
    return (sum);
}

/* 과목 sub의 평균점을 구한다. */
double ave_sub(int v[][SUB_NO], int sub) {
    return ((double)sum_sub(v, sub)/STD_NO);
}

/* 학생 v[no]의 합계점을 구한다. */
int sum_std(int v[][SUB_NO], int no) {
    int i;
    int sum = 0;

    for(i=0; i<SUB_NO; i++) {
        sum += v[no][i];
    }
    return (sum);
}

/* 학생 v[no]의 평균점을 구한다. */
double ave_std(int v[][SUB_NO], int no) {
    return ((double)sum_std(v, no)/SUB_NO);
}

/* 점수의 일람표를 출력 */
void print_list(int v[][SUB_NO]) {
    int i, j;
    puts("No 국어 수학 영어");
    puts("------------------");
    
    for(i=0; i<STD_NO; i++) {
        printf("%2d", i+1);

        for(j=0; j<SUB_NO; j++) {
            printf("%4d", v[i][j]);
        }
        putchar('\n');
    }
    puts("-------------------\n");
}

int main(void) {
    int i;
    int tensu[STD_NO][SUB_NO];

    for(i=0; i<STD_NO; i++) {
        printf("[%2d번]", i+1);
        printf("국어 : "); scanf("%d", &tensu[i][0]); // 과목번호 0 : 국어
        printf("수학 : "); scanf("%d", &tensu[i][1]); // 과목번호 1 : 수학
        printf("영어 : "); scanf("%d", &tensu[i][2]); // 과목번호 2 : 영어
    }

    putchar('\n');
    print_list(tensu);

    printf("[국어] 최고점 : %d\n", top_sub(tensu, 0, 1));
    printf("      최저점 : %d\n", top_sub(tensu, 0, 0));
    printf("      평균점 : %.1f\n", ave_sub(tensu, 0));

    printf("[수학] 최고점 : %d\n", top_sub(tensu, 1, 1));
    printf("      최저점 : %d\n", top_sub(tensu, 1, 0));
    printf("      평균점 : %.1f\n", ave_sub(tensu, 1));

    printf("[영어] 최고점 : %d\n", top_sub(tensu, 2, 1));
    printf("      최저점 : %d\n", top_sub(tensu, 2, 0));
    printf("      평균점 : %.1f\n", ave_sub(tensu, 2));

    puts("\n각 학생의 세 과목 평균점");

    for(i=0; i<STD_NO; i++) {
        printf("%2d : %.1f\n", i+1, ave_std(tensu, i));
    }
}