/*
Напишете програма, която въвежда масив от цели числа от клавиатурата. Сортирайте го във
възходящ ред. След това от клавиатурата въведете цяло число и го поставете на правилната
му позиция в масива, така че да не се нарушава реда. Принтирайте масива
*/

#include <stdio.h>

void main()
{

    int array[100];

    int arrayMax = 0;

    int temp = 0;

    printf(" -- Please enter how much numbers you want to add: ");

    scanf("%d", &arrayMax);

    for (int i = 0; i < arrayMax; i++)
    {
        printf("  -- Please enter number No %d : ", i+1);
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < arrayMax; i++)
    {

        for (int j = 0; j < arrayMax; j++)
        {
            if (array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    /*
    След това от клавиатурата въведете цяло число и го поставете на правилната
    му позиция в масива, така че да не се нарушава реда. Принтирайте масива
    */

    int lastInputNumber = 0;

    printf("  -- Please enter last number to complete the task: ");

    scanf("%d", &lastInputNumber);

    for (int i = 0; i < arrayMax+1; i++)
    {

        if (lastInputNumber < array[i])
        {
            temp = array[i];
            array[i] = lastInputNumber;
            lastInputNumber = temp;
        }
    }

    if (lastInputNumber > array[arrayMax])
    {
        array[arrayMax] = lastInputNumber;
    }

    for (int i = 0; i < arrayMax+1; i++)
    {
        printf("%d \n", array[i]);
    }
}