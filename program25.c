#include <stdio.h>
// Display the "Jay Ganesh" 4 times
// This is a static code. this is drawback.
void Display()
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= 4; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}
int main()
{
    
    Display();

    return 0;
}
