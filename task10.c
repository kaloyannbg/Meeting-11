/*
Напишете програма, която принтира съдържанието на масив, като показва позицията в масива
на горния ред. Пример:
0 1 2 3 4 5 6 7 8 9
| 1| 8| 10| 7| 4| 112| 43| 144| 18| 11|
*/

#include <stdio.h>
#define LENGTH 100

int countDigits(int number);

void main()
{

    int iArrayMax = 0;

    int array[LENGTH];

    printf("  -- How much numbers you want to array: ");

    scanf("%d", &iArrayMax);

    for (int i = 0; i < iArrayMax; i++)
    {
        printf(" -- Press Number No%d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int currentDigits = 0;

    for (int i = 0; i < iArrayMax; i++)
    {
        currentDigits = countDigits(array[i]);

        for (int j = 0; j < 10-currentDigits; j++)
        {
            printf(" ");
        }

        printf("%d", i);
    }
    putchar('\n');
    for (int i = 0; i < iArrayMax; i++)
    {
        currentDigits = countDigits(array[i]);

         for (int j = 0; j < 10-currentDigits; j++)
        {
            printf(" ");
        }

        printf("%d", array[i]);
    }
}

int countDigits(int number)
{
    int counter = 0;

    while (number > 0)
    {
        number /= 10;
        counter++;
    }
    return counter;
}