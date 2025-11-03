//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts number from user and print all odd numbers till that number
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Descrption      :   Displays numbers till N
//  Input           :   13
//  Output          :   1   3   5   7   9   11  13
//  Author          :   Bhau Soma Pise
//  Date            :   19-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt=iCnt+2)
    {
        printf("%d\t",iCnt);
    }
}

// Time Complexity : O(N/2)

int main()
{
    int iValue = 0;

    printf("Enter the frequency : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}