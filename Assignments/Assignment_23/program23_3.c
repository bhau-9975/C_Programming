// Accept N numbers from user and accept one another number and return index of LAST occurence of that number.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int LastOccurence(int Arr[], int iLength, int iNum)
{
    int iCnt = 0, iLastOcc = -1;
    bool bFlag = false;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iNum)
        {
            iLastOcc = iCnt;
            
        }
    }

    return iLastOcc;
}

int main()
{

    int iSize = 0, iCnt = 0, iValue = 0;
    int iRet = 0;

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

    iRet = LastOccurence(p, iSize, iValue);

    printf("%d : is the last occurence of %d", iRet, iValue);

    free(p);
    return 0;
}
