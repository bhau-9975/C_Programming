// Accept N numbers from user and return the Largest number

#include <stdio.h>
#include <stdlib.h>

int Max(int Arr[], int iLength)
{
    int iCnt = 0, iMax = 0;

    for (iCnt = 1; iCnt <= iLength; iCnt++)
    {
        if (Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
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
    for(iCnt=1; iCnt<=iSize; iCnt++){
    scanf("%d", &p[iCnt]);
    }

    iRet = Max(p, iSize);
    printf("The Maximum element is : %d", iRet);

    return 0;
}