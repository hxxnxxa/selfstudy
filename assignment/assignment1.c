#include <stdio.h>

/*
z:=0
u:=x
v:=y

{ z+u*v = x*y, u>=0}

while (u<>0)do begin
    if odd(u)
        z = z+v
    u = u/2
    v = v*2

end
 {z = x * y}
*/ 

int main(void) {
    int x;
    int y;
    int z = 0;
    int u = x;
    int v = y;

    int tmp1 = z + u * v;
    int tmp2 = x * y;

    printf("tmp1: %d\n", tmp1);
    printf("tmp2: %d\n", tmp2);

    tmp1 = tmp2;
    
    do{
        if(u%2==1) {
            z = z + v;
            printf("z: %d\n",z);
        }
        u = u/2;
        v = v*2;
    } while(u>0);

    z = x * y;
    printf("z: %d\n",z);

    return(0);
}