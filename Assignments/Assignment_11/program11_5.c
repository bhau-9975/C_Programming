////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts the range from user and display all numbers between that range in reverse order
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayRangeReverse
//  Descrption      :   Displays reverse range
//  Input           :   23  35
//  Output          :   35  34  33  32  31  30  29  28  27  26  25  24  23
//  Author          :   Bhau Soma Pise
//  Date            :   25-10-2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayRangeReverse(int iNo1, int iNo2)
{

    int iCnt = 0;

    for (iCnt = iNo2; iCnt >= iNo1; iCnt--)
    {
        printf("%d\t", iCnt);
    }
}
// Time Complexity  :   O(N)

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter the starting point : ");
    scanf("%d", &iValue1);

    printf("Enter the ending point : ");
    scanf("%d", &iValue2);

    if (iValue1 > iValue2)   // Starting point should be less than ending point
    {
        printf("Invalid Range...!");
    }
    else
    {
        DisplayRangeReverse(iValue1, iValue2);
    }
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Test Cases :
//  Input   :   23  35  ,   Output  :   35  34  33  32  31  30  29  28  27  26  25  24  23
//  Input   :   10  18  ,   Output  :   18  17  16  15  14  13  12  11  10
//  Input   :   10  10  ,   Output  :   10
//  Input   :  -10   2  ,   Output  :   2   1   0  -1  -2  -3  -4  -5  -6  -7  -8  -9  -10
//  Input   :   90  12  ,   Output  :   Invalid Range
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
