#include<stdio.h>
#include<stdlib.h>

void CheckEven(int iNo)
{
    if((iNo % 2) == 0){
        printf("It is Even Number");
    } 
    else
    {
        printf("It is ODD Number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    CheckEven(iValue);

    return EXIT_SUCCESS;
}