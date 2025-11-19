// Accept N numbers from user and accept range, and display all elements from that range

#include <stdio.h>
#include <stdlib.h>

void ElementsFromRange(int Arr[], int iLength, int iStart, int iEnd)
{

    int iCnt = 0;
        printf("The elements between %d and %d is: \n", iStart, iEnd);

    for (iCnt = 1; iCnt <= iLength; iCnt++)
    {
        if (Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

int main()
{

    int iCnt = 0, iSize = 0, iStart = 0, iEnd = 0;

    int *p = NULL;

    printf("Enter the number of elements : ");
    scanf("%d", &iSize);

    printf("Enter the start of range : ");
    scanf("%d", &iStart);

    printf("Enter the end of range : ");
    scanf("%d", &iEnd);

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

    ElementsFromRange(p, iSize, iStart, iEnd);
}
