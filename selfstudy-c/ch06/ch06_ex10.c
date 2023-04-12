#include<stdio.h>
#define NUMBER 5                      // NUMBER 매크로 선언

/* 입력받는 정수를 모두 배열에 저장하는 함수*/
void fill(int vc[], int no, int x) {   //vc : 배열, no : 요소 수, x : 배열 요소 값
    for(int i=0;i<no;i++) {            //i가 no 이하일 때만 실행
        vc[i] = x;
    }
}
int main(void) {
    int x[NUMBER] = {5,4,3,2,1};      //x는 5개 크기를 가진 배열이고 초기화를 했다.

    fill(x, NUMBER, 2);               //fill함수에 인자로 x배열, NUMBER, 2를 넣었다.

    for(int i=0;i<NUMBER;i++) {       //i가 NUMBER보다 작을때만 실행
        printf("x[%d] = %d\n",i,x[i]);//x배열에 x[i]값 저장
    }

    return(0);
}