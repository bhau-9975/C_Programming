//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts total marks and obtained marks and calculate percentage.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Percentage
//  Descrption      :   Calculates percentage
//  Input           :   float, float             
//  Output          :   float
//  Author          :   Bhau Soma Pise
//  Date            :   19-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////

float Percentage(float iTot, float iObt)
{
    float fPercent = 0.0f;
    fPercent = ((iObt / iTot) * 100);
    return fPercent;

    // Or we can directly return
    // return ((iObt/ iTot)*100);
}

int main()
{
    float iTotal = 0.0, iObtained = 0.0, fRet = 0.0;

    printf("Enter the total marks : ");
    scanf("%d", &iTotal);

    printf("Enter the obtained marks : ");
    scanf("%d", &iObtained);

    fRet = Percentage(iTotal, iObtained);

    printf("Percentage is : %.4f", fRet);

    return 0;
}