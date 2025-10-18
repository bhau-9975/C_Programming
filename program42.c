// Display the even numbers till the given number
#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++) 
    {
        if (iCnt % 2 == 0)       // Using Condition
        {
            printf("%d\t", iCnt);
        }
    }
}

// Time complexity =O(N)

int main()
{

    int number = 0;
    printf("Enter the number : "); // Dynamic code
    scanf("%d", &number);

    Display(number);
    return 0;
}