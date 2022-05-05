#include <stdio.h>

void main()
{
    int arr[] = {'B', 'R', 'O', 'T', 'O', 'T', 'Y', 'P', 'E'};
    int row = (sizeof(arr) / 4) - 1;
    for (int i = 0; i <= row; i++)
    {
        for (int column = 0; column <= i; column++)
        {
            printf("%c", arr[column]);
        }
        printf("\n");
    }
}