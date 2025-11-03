//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts the range from user and return the addition of all even numbers between that range
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   AdditionOfEven
//  Descrption      :   Prints addition of even numbers between range
//  Input           :   23  30
//  Output          :   212
//  Author          :   Bhau Soma Pise
//  Date            :   25-10-2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

int AdditionOfEven(int iNo1, int iNo2)
{

    int iCnt = 0, iAddition = 0;

    for (iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        if ((iCnt % 2) == 0)
            iAddition = iAddition + iCnt;
    }

    return iAddition;
}
// Time Complexity  :   O(N)

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;
    printf("Enter the starting point : ");
    scanf("%d", &iValue1);

    printf("Enter the ending point : ");
    scanf("%d", &iValue2);

    // Condition to check if starting point is less than ending point or not and
    // checks if range is positive or not.

    if (iValue1 > 0 && iValue2 > 0 && iValue1 < iValue2)
    {
        iRet = AdditionOfEven(iValue1, iValue2);
        printf("Addition is : %d", iRet);
    }
    else
    {
        printf("Invalid Range...!");
    }

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Example :
//  Input   :   23  30    Output  :   108
//  Input   :   10  18    Output  :   70
//  Input   :  -10   2    Output  :   Invalid range
//  Input   :   90   12   Output  :   Invalid range (Range should be positive)
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
