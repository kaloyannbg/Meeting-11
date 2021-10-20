#include <stdio.h>

int main()
{

    int array[6];

    int min = 0;

    int max = 0;

    for (int i = 0; i < 6; i++)
    {
        printf("  Enter number %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    min = array[0];

    for (int i = 0; i < 6; i++)
    {

        if (array[i] > max)
        {
            max = array[i];
        }
        else if (array[i] < min)
        {
            min = array[i];
        }
    }

    printf("Min value: %d  ,  max value: %d", min, max);

    return 0;
}