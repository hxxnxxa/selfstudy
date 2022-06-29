#include<stdio.h>
#define NUMBER 5

//요소 수 no의 배열 v2의 모든 요소를 역순으로 배열 v1에 저장
void intary_rcpy(int v1[], const int v2[], int no) {    //배열 요소 복사하는 함수 선언
    for(int i=0; i<no; i++) {                           //해당 함수는 no보다 작을 때만 반복된다.
        v1[i] = v2[no-i-1];                             //no-i-1 번째 수를 다시 i번째 저장한다.
    }
}

int main(void) {
    int i;
    int vx[NUMBER], vy[NUMBER];                         //임의의 배열 두 개 선언

    for(i=0; i<NUMBER; i++) {                           //i는 0부터 시작하여 NUMBER보다 작을때까지 반복
        printf("vx[%d] : ",i);                          //vx배열의 i번째 표시
        scanf("%d", &vx[i]);                            //vx[i]번째에 입력받은 수 저장
    }

    intary_rcpy(vy, vx, NUMBER);                        //역순 저장 함수 호출하여 역순으로 저장하기

    puts("배열 vy에 배열 vx의 요소를 역순으로 저장 완료");

    for(i=0; i<NUMBER; i++) {                           //i는 NUMBER보다 작을때까지 반복한다.
        printf("vy[%d] = %d\n",i,vy[i]);                //역순으로 배치한 vy배열 요소 순서대로 출력해보기
    }

    return(0);
}