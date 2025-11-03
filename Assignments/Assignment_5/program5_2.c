///////////////////////////////////////////////////////////////////////////////////////
//
//  Find Maximum of two numbers
//
///////////////////////////////////////////////////////////////////////////////////////



#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FindMax
//  Descrption      :   Checks Maximum of two numbers 
//  Input           :   7   9
//  Output          :   9 is maximum than 7
//  Author          :   Bhau Soma Pise
//  Date            :   18-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////

void FindMax(int iNo1, int iNo2)
{
    

    if (iNo1 > iNo2)
    {
        printf("%d is maximum than %d .", iNo1, iNo2);
    }
    else
    {
        printf("%d is maximum than %d .", iNo2,iNo1 );
    }
}

int main()
{
    int iValue1 = 0, iValue2=0;
    printf("Enter first number : ");
    scanf("%d", &iValue1);

    printf("Enter Second number : ");
    scanf("%d", &iValue2);
    FindMax(iValue1, iValue2);

    return 0;
}