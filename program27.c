#include <stdio.h>
// Display the "Jay Ganesh" frequency times
// But this is a dynamic code with filter

void Display(int iFrequency)
{
    int iCnt = 0;
    if (iFrequency < 0)       // Filter
    {
        printf("Invalid Input...n");
       
    }
    for (iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}
int main()
{
    int iCount = 0;
    printf("Enter the frequency :\n");
    scanf("%d", &iCount);

    Display(iCount);

    return 0;
}
