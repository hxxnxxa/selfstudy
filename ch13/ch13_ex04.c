/*

신장과 체중을 읽어들여서 평균값을 구해서 표시

*/

#include<stdio.h>
#define NUMBER 100

typedef struct {
    char name[100];
    double height;
    double weight;
} pdata;

/*---x와  y가 가리키는 개인 데이터를 교환---*/
void swap(pdata *x, pdata *y) {
    pdata temp = *x;
    *x = *y;
    *y  = temp;
}

/*---배열 data의 처음 n개 요소를 신장의 오름차순으로 정렬---*/
void sort(pdata data[], int n) {
    int k = n-1;
    while(k>=0) {
        int i, j;
        for (i=1, j=-1; i<=k; i++) {
            if(data[i-1].height > data[i].height) {
                j = i-1;
                swap(&data[i], &data[j]);
            }
            k = j;
        }
    }
}

int main(void) {
    FILE *fp;
    int i;
    int ninzu = 0;          //사람 수
    double hsum = 0.0;      //신장 총 합
    double wsum = 0.0;      //체중 총 합

    pdata data[NUMBER];     //개인 데이터

    if((fp=fopen("hw.dat","r"))==NULL)
        printf("\a파일을 열 수 없습니다.\n");
    else {
        while(fscanf(fp, "%s%lf%lf", data[ninzu].name, &data[ninzu].height, &data[ninzu].weight)==3) {
            hsum += data[ninzu].height;
            wsum += data[ninzu].weight;
            ninzu++;
        }

        sort(data, ninzu); //신장 순으로 나열

        for(i=0; i<ninzu; i++) {
            printf("%-10s %5.1f %5.1f\n", data[i].name, data[i].height, data[i].weight);
        }
        printf("-------------------------------------------------------\n");
        printf("평균 %5.1f %5.1f", hsum/ninzu, wsum/ninzu);
        fclose(fp);
    }
    return (0);
}