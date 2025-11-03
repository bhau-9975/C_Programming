//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts number from user and print that number of $ & * on screen
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Descrption      :   Displays $ & * on screen N times
//  Input           :   3             
//  Output          :   $ & *   $ & *   $ & *   
//  Author          :   Bhau Soma Pise
//  Date            :   19-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$ & *\t");
    }
}
// Time Complexity : O(N)

int main()
{
    int iValue = 0;

    printf("Enter the frequency : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}