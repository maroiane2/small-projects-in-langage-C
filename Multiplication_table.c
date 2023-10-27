#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int num,a;
    printf("write the number : ");
    scanf("%d",&num);
    for(int i=0;i <=10;i++){
        printf("%d * %d = %d\n",i,num,i*num);
    }
    getch();
    return 0;
}
