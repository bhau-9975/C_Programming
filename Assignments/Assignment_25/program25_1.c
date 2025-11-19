// Accpet N numbers from user and return the difference between summation of even elements and odd elements.

#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{

    int iCnt = 0, iSumEven = 0, iSumOdd = 0, iDiff = 0;
    printf("The summation of even and odd are : \n");

    for (iCnt = 1; iCnt <= iLength; iCnt++)
    {
        if ((Arr[iCnt] % 2) == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }

    printf("Sum Even : %d\n", iSumEven);
    printf("Sum Odd : %d\n", iSumOdd);

    iDiff = iSumEven - iSumOdd;
    return iDiff;
}

int main()
{

    int iCnt = 0, iSize = 0, iRet = 0;

    int *p = NULL;

    printf("Enter the number of elements : ");

    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate the memory.");
        return -1;
    }

    printf("Enter the elements : \n");
    for (iCnt = 1; iCnt <= iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iSize);
    printf("Difference of summation of all even and odd elements is : %d", iRet);

    free(p);
    return 0;
}