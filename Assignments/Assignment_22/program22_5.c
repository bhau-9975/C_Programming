//  Accept N numbers from user and accept one another number as n and return its frequency int it.

#include <stdio.h>
#include <stdlib.h>

int CountFrequency(int Arr[], int iLength, int iNum)
{
    int iCnt = 0, iFrequency = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iNum)
        {
            iFrequency++;
        }
    }

    return iFrequency;
}

int main()
{

    int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;

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

    iRet = CountFrequency(p, iSize, iValue);
    printf("The frequency of %d is : %d", iValue, iRet);

    free(p);

    return 0;
}
