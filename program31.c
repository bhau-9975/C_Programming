// : Print 1    2   3   4   5  Using Iteration (For loop)
#include <stdio.h>

void Display()
{
    int iCnt=0;

    for (iCnt = 1;iCnt <= 5; iCnt++)   // This one is static loop because every time it is going to print * only.... 
    {
        printf("*\t");
    }
}

int main()
{
    Display();

    return 0;
}