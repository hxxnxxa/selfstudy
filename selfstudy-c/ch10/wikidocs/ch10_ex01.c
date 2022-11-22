#include<stdio.h>

// pointer : 메모리 주소 값을 가리킨다

int main(void) { 

    char* cp = NULL;
    // cp라는 변수를 선언하면 메모리에 일정크기가 할당되어진다.
    // char cp는 아무 값도 저장되지 않는다.
    // cp라는 변수는 메모리에 8bits를 차지한다.

    // char A 라고 변수를 선언하면 컴퓨터는 메모리 비트 8개를 묶어서 메모리 주소를 지정해버린다.
    // 그 메모리 주소는 프로그램이 실행될 때마다 값이 바뀐다.
    // 우리가 강의실에서 먼저온 사람이 맘에 드는 자리에 앉듯이 매번 랜덤이라고 보면 된다.
    // 메모리 주소가 지정되었으면, 해당 비트에 값을 주어서 사용자가 부여한 변수 값을 저장한다.
    // 예를 들어, 10을 변수 값에 저장했다면, 비트로는 0000 1010 이 저장된 것이다.

    int* ip = NULL;
    // ip는 자료형이 int형인 주소값을 갖는다.

    printf("%lu %lu\n", sizeof(char*), sizeof(int*));
    // sizeof(char*) : 8
    // sizeof(int*)  : 8
    
    printf("%lu %lu\n", sizeof(cp), sizeof(ip));
    // sizeof(cp) : 8
    // sizeof(ip) : 8

    printf("%p %p\n", &cp, cp);
    // &cp : 0x7ffee992f4f0 
    // cp  : 0x0
    // & 뒤에 변수 이름을 적으면, 해당 변수 이름의 메모리 주소값을 나타나게 된다.

    printf("%p %p\n", &ip, ip);
    // &ip : 0x7ffee992f4e8 
    // ip  : 0x0

    return 0;
}