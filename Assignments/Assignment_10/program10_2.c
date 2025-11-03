///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts the width and height of rectangle from user and calculate its area
//  (Area = Width * Height)
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Exapmle :
//  Input   :   5.3    9.78      Output  : 51.834
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   AreaOfRectangle
//  Descrption      :   Calculates the area of rectangle
//  Input           :   5.3     
//  Output          :   51.834
//  Author          :   Bhau Soma Pise
//  Date            :   25-10-2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

float AreaOfRectangle(float fWidth, float fHeight)
{
    float fArea = 0.0;

    fArea = (fWidth * fHeight);

    return fArea;
}

// Time complexity : O(1)

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0, fRet = 0.0;

    printf("Enter the width : ");
    scanf("%f", &fValue1);

    printf("Enter the Height : ");
    scanf("%f", &fValue2);

    fRet = AreaOfRectangle(fValue1, fValue2);
    printf("The area circle is : %.4f ", fRet);
    return 0;
}