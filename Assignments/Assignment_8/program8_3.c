//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program to find a factorial of the given number
//
//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Exapmle :
//  Input   :   5     Output  :     120 (5*4*3*2*1)
//  Input   :  -5     Output  :     120 (5*4*3*2*1)
//  Input   :   4     Output  :     24  (4*3*2*1)
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Factorial
//  Descrption      :   Calculates factorial of number
//  Input           :   3             
//  Output          :   6 (3*2*1)   
//  Author          :   Bhau Soma Pise
//  Date            :   19-10-2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iFact = iFact * iCnt;
        // OR
        // iFact *=iCnt;
    }

    return iFact;
}
// Time complexity : O(N)
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("Factorial of %d is : %d", iValue, iRet);
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test cases :
//  Input   :   5     Output  :     120 (5*4*3*2*1)
//  Input   :  -5     Output  :     120 (5*4*3*2*1)
//  Input   :   4     Output  :     24  (4*3*2*1)
//
//////////////////////////////////////////////////////////////////////////////////////////////////
