// Display the even numbers till the given number 
#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = 2; iCnt <= iNo; iCnt=iCnt+2)  // Different increament
    {
        printf("%d\t", iCnt);
    }
}

int main()
{

    int number = 0;
    printf("Enter the number : ");    //Dynamic input
    scanf("%d", &number);

    Display(number);
    return 0;
}