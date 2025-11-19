//  //  Accept N numbers from user and accept one another number as n and check if it is present or not.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckNumber(int Arr[], int iLength, int iNum)
{
    int iCnt = 0, iFrequency = 0;
    bool bFlag = false;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iNum)
        {
            bFlag=true;
        }
    }

    return bFlag;
}

int main()
{

    int iSize = 0, iCnt = 0, iValue = 0;
    bool bRet = false;

    printf("Enter the number of an elements : ");
    scanf("%d", &iSize);

    printf("Enter the number to be checked : ");
    scanf("%d", &iValue);

    int *p = NULL;

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Memory is not allocated.");
        return -1;
    }

    printf("Enter the elements : \n");

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the element %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    bRet = CheckNumber(p, iSize, iValue);

    if (bRet == true)
    {
        printf("%d is Present.", iValue);
    }
    else
    {
        printf("%d is not Present.", iValue);
    }

    free(p);
    return 0;
}
