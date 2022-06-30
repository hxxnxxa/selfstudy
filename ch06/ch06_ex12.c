/*
    배열의 모든 요소를 역순으로 배치 
*/

#include <stdio.h>
#define NUMBER 5 /* 배열의 요소 수 */

//요소 수 no 인 배열 vc의 모든 요소를 역순으로 배치
void rev_intary(int vc[], int no) {         //배열과 배열 요소 개수를 인자값으로 받기
    
    for(int i=0; i<no/2; i++) {             //i는 요소수의 반만큼만 실행 
        int temp = vc[i];                   //temp라는 임시 변수에 i번째 요소 저장
        vc[i] = vc[no-i-1];                 //i번째 요소에는 no-i-1번째 요소를 저장
        vc[no-i-1] = temp;                  //아까 저장했던 임시 변수 temp에 있던 값은 no-i-1번째 배열에 저장
    }
}

int main(void) {
    int i;                                  //i변수 선언
    int vx[NUMBER];                         //vx배열은 앞서 선언한 매크로 값인 5를 갖는다.

    for(i=0; i<NUMBER; i++) {               //i는 NUMBER보다 작을때까지만 1씩 증가하면서 반복한다.
        printf("vx[%d] : ", i);             //몇 번째 배열인지 표시하기
        scanf("%d", &vx[i]);                //배열 요소 입력받아서 저장하기
    }

    rev_intary(vx, NUMBER);                 //역순으로 배치하는 함수 호출하여 앞서 입력받은 배열과 배열요소수를 인자로 받기

    puts("배열 vx의 요소를 역순으로 배치했습니다.");

    for(i=0; i<NUMBER; i++) {
        printf("vx[%d] = %d\n",i,vx[i]);
    }

    return(0);
}

