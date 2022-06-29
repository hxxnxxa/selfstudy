/*
    배열요소 중  최소값을 구하는 함수를 이용해 영어와 수학의 최저점 구하기 
*/
#include <stdio.h>
#define NUMBER 5

//최소값 구하는 함수
int min_of(const int vc[], int no) {
    int min = vc[0];        //배열의 첫번째 요소를 임시변수에 저장

    for(int i=0;i<no;i++) { //i가 no보다 작을때만 for문 실행
        if(vc[i]<min) {     //순서대로 vc 배열 요소와 min 값 비교, 더 작을 경우 아래 실행
            min = vc[i];    //min 변수에 vc[i] 저장
        }
    }
    return (min);           //min 반환
}

int main(void) {
    int eng[NUMBER];        //5명의 영어점수 입력받기 
    int mat[NUMBER];        //5명의 수학점수 입력받기
    int min_e, min_m;       //영어 최저점, 수학 최저점을 저장할 임시 변수 선언

    printf("%d명의 점수를 입력해주세요.\n",NUMBER);

    for(int i=0;i<NUMBER;i++) {
        printf("[%d] 영어 : ",i+1); scanf("%d", &eng[i]);
        printf("     수학 : "); scanf("%d", &mat[i]);
    }

    min_e = min_of(eng, NUMBER);
    min_m = min_of(mat, NUMBER);

    printf("영어의 최저점 : %d\n",min_e);
    printf("수학의 최저점  :%d\n",min_m);

    return (0);
}
