///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts the range from user and display all numbers between that range
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Descrption      :   Prints numbers between range
//  Input           :   5   10
//  Output          :   5   6   7   8   9   10
//  Author          :   Bhau Soma Pise
//  Date            :   25-10-2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo1, int iNo2)
{

    int iCnt = 0;

    for (iCnt = iNo1; iCnt <= iNo2; iCnt++)
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

    Display(iValue1, iValue2);
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Example :
//  Input   :   23  35  Output  :   23  24  25  26  27  28  29  30  31  32  33  34  35
//  Input   :   10  18  Output  :   10  11  12  13  14  15  16  17  18
//  Input   :   10  10  Output  :   10
//
///////////////////////////////////////////////////////////////////////////////////////////////////
