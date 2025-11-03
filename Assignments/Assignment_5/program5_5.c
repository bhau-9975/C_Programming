///////////////////////////////////////////////////////////////////////////////////////
//
//  Find largest among three numbers
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FindLargest
//  Descrption      :   Checks Largest of three numbers 
//  Input           :   7   9   4
//  Output          :   9 is Largest 
//  Author          :   Bhau Soma Pise
//  Date            :   18-10-2025
//
////////////////////////////////////////////////////////////////////////////////////////

int FindLargest(int iNo1, int iNo2, int iNo3)
{

    if (iNo1 > iNo2)
    {
        if (iNo1 > iNo3)
        {
         //   printf("%d : Number1 is largest.", iNo1);
            return iNo1;
        }
        else
        {
         //   printf("%d : Number3 is largest.", iNo3);
            return iNo3;
        }
    }
    else
    {
        if (iNo2 > iNo3)
        {
         //   printf("%d : Number2 is largest.", iNo2);
            return iNo2;
        }
        else
        {
          //  printf("%d : Number3 is largest.", iNo3);
            return iNo3;
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;
    printf("Enter first number : ");
    scanf("%d", &iValue1);

    printf("Enter second number : ");
    scanf("%d", &iValue2);

    printf("Enter third number : ");
    scanf("%d", &iValue3);
    iRet = FindLargest(iValue1, iValue2, iValue3);

    printf("\nThe largest number is : %d ", iRet);

    return 0;
}