#include<stdio.h>
#include<stdlib.h>

void CheckVisible(int iNo)
{
    if((iNo % 3) == 0)
    {
        printf("It is Divisible\n");
    }
    else
    {
        printf("It is not Divisible\n");
    }
}


int main ()
{
    int iValue = 0;

    printf("Enter a Number: ");
    scanf("%d", &iValue);

    CheckVisible(iValue);

    return EXIT_SUCCESS;
}