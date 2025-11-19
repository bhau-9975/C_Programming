// Accept N numbers from user and return the Smallest number

#include <stdio.h>
#include <stdlib.h>

int Min(int Arr[], int iLength)
{
    int iCnt = 0, iMin = 0;
    iMin=Arr[0];   // Important   --> Dont forgot

    for (iCnt = 1; iCnt <= iLength; iCnt++)
    {
        if (Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
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

    iRet = Min(p, iSize);
    printf("The Smallest element is : %d", iRet);

    return 0;
}