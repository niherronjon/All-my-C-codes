#include <stdio.h>
int main()
{
    int rows = 4;
    int number = 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }
    return 0;
}