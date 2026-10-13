/*
    Step 1 : Understand the Problem Statement.
    Step 2 : Write the Algorithm.
    Step 3 : Decide the Programming Language.
    Step 4 : Write the Program.
    Step 5 : Test the Program.
*/


////////////////////////////////////////////////////////////////////////////
//
// Step 1 : Understand the Problem Statement.
//          User is going to Enter Any 2 Integers,
//          and We have to Perform Addition.
//
////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////
//
// Step 2 : Write the Algorithm.
/*
    START
        Accept First Number as No1.
        Accept First Number as No2.
        Create the Variable as Ans to store the Result.
        Perform the Addition and Store into Ans.
        Display the Result from Ans.
    END
*/          
//
////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////
//
// Step 3 : Decide the Programming Language.
//          We Select C Programming.
//
////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////
//
// Step 4 : Write the Program.
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter First Number : \n");
    scanf("%d", &iValue1);


    printf("Enter Second Number : \n");
    scanf("%d", &iValue2);

    iResult = iValue1 + iValue2 ;                      // Business Logic

    printf("Addition is : %d\n", iResult);

    return 0;
}