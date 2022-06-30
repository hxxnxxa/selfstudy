#include <stdio.h>
int main(void) {
    printf("직사각형을 만들어봅시다.\n");

    //wrong answer
    /**
    int height;
    int width;

    printf("한 변(첫 번째) : "); scanf("%d",&height);
    printf("한 변(두 번째) : "); scanf("%d",&width);

    for(int j=0;j<height;j++) {
        for(int i=0;i<width;i++) {
            printf("*");
        }
        printf("\n");
    }
    */

   int len1;
   int len2;

   int width;
   int height;

   printf("한 변(첫 번째) : "); scanf("%d",&len1);
   printf("한 변(두 번째) : "); scanf("%d",&len2);

   if(len1<len2) {
       height = len1;
       width = len2;

       for(int j=0;j<height;j++) {
           for(int i=0;i<width;i++) {
               printf("*");
            }
            printf("\n");
        }
   } else if(len1>len2) {
       height = len2;
       width = len1;

        for(int j=0;j<height;j++) {
           for(int i=0;i<width;i++) {
               printf("*");
            }
            printf("\n");
        }
   }
    return (0);
}