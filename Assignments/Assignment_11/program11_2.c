///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts the range from user and display all even numbers between that range
//
///////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayEven
//  Descrption      :   Prints even numbers between range
//  Input           :   23  35
//  Output          :   24  26  28  30  32  34 
//  Author          :   Bhau Soma Pise
//  Date            :   25-10-2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayEven(int iNo1, int iNo2)
{

    int iCnt = 0;

    for (iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        if ((iCnt % 2) == 0)
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

    DisplayEven(iValue1, iValue2);
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Example :
//  Input   :   23  35  Output  :   24  26  28  30  32  34  
//  Input   :   10  18  Output  :   10  12  14  16  18
//  Input   :   10  10  Output  :   10
//
///////////////////////////////////////////////////////////////////////////////////////////////////
