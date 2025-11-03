//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accepts number from user and
//  if the number is less then 50 then print "Small"
//  if it is greater than 50 and less than 100 then print "Medium"
//  if it it greater than 100 then print "Large"
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Descrption      :   Displays if number is Large, Medium or Small
//  Input           :   75      Output  :   Medium
//  Input           :   115     Output  :   Large
//  Input           :   25      Output  :   Small   
//  Author          :   Bhau Soma Pise
//  Date            :   19-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo > 50)     // Filter for number above 50, here 50 is excluded for medium.(eg:  50 = Small)
    {
        if (iNo > 100)      // Filter for number above 100, here 100 is excluded for Large.(eg: 100 = Medium)
        {
            printf("Large...!");
        }
        else
        {
            printf("Medium...!");
        }
    }
    else
    {
        printf("Small...!");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}