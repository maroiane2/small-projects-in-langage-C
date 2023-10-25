#include <stdio.h>
#include <stdlib.h>

int main()
{
    int date,age;
    printf("What is your year of birth ? ");
    scanf("%d",&date);
    age = 2023 - date;
    printf("You will then be %d this year!",age);
    getch();
    return 0;
}
