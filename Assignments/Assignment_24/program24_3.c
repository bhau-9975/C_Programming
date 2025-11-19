// Accept the N numbers from user and return the difference between largest and smallest

#include <stdio.h>

#include <stdlib.h>

int Difference(int Arr[], int iLength)
{

    int iCnt = 0, iMax = 0, iMin = 0, iDiff = 0;

    //iMax = Arr[0];
    iMin = Arr[0];
    for (iCnt = 1; iCnt <= iLength; iCnt++)
    {

        if (Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        else
        {
            iMin = Arr[iCnt];
        }
    }

    printf("\nMin is : %d and Max is : %d ",iMin,iMax);

    iDiff = iMax - iMin;
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
    printf("\nThe difference between largest and smallest element is : %d", iRet);

    free(p);
    return 0;
}