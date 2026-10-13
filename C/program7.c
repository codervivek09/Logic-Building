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

////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :  Addition
//  Input           :  Integer, Integer
//  Output          :  Integer
//  Description     :  Performs Addition
//  Date            :  04/10/2026
//  Author          :  Vivek Valmik Phad
//
////////////////////////////////////////////////////////////////////////////

int Addition(int iNo1, int iNo2)
{
    int iAns = 0;
    iAns = iNo1 + iNo2;                         // Business Logic
    return iAns;
}


////////////////////////////////////////////////////////////////////////////
// 
//  Entry Point of the Application
//
////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1=0, iValue2=0, iResult=0;

    printf("Enter First Number : \n");
    scanf("%d", &iValue1);


    printf("Enter Second Number : \n");
    scanf("%d", &iValue2);

    iResult = Addition(iValue1, iValue2);                      

    printf("Addition is : %d\n", iResult);

    return 0;
}
