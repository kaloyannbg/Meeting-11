/*
6. Напишете програма, която да брои колко пъти се среща едно
число в даден масив от цели числа. Масива трябва да бъде
въведен от клавиатурата. Принтирайте резултатите.
*/

#include <stdio.h>
#define ARRAY_LENGTH 100

void main()
{

    int array[ARRAY_LENGTH] = { 0 };

    int arrayLengthChoice = 0;

    int numbers[ARRAY_LENGTH];

    int counters[ARRAY_LENGTH];

    int repeatCounter = 0;

    int lastArray[ARRAY_LENGTH] = {0};

    int lastArrayOfCounters[ARRAY_LENGTH] = {0};

    int lastArrayCounter = 0;

    int counterForEqualNumbers = 0;

    printf("  - - Please enter how much numbers you want to add: ");

    scanf("%d", &arrayLengthChoice);

    for(int i = 0; i < arrayLengthChoice; i++) {
        printf("  -- Enter number No %d : ", i+1);
        scanf("%d", &array[i]);
    }


    for (int i = 0; i < arrayLengthChoice; i++)
    {
        repeatCounter = 0;

        for (int j = 0; j < arrayLengthChoice; j++)
        {
            if (array[i] == array[j])
            {
                repeatCounter++;
            }
        }

        numbers[i] = array[i];
        counters[i] = repeatCounter;

        // printf(" %d  -- %d times\n", array[i], repeatCounter);
    }

    for (int i = 0; i < arrayLengthChoice; i++)
    {
        counterForEqualNumbers = 0;

        for (int j = i + 1; j < arrayLengthChoice; j++)
        {
            if (numbers[i] == numbers[j]) // Example, we have 3 numbers / 1 , 2 , 1; check 1 , counter now will be 1, and check again for other numbers
            {
                counterForEqualNumbers++;
            }
        }
        if (counterForEqualNumbers == 0)
        {
            lastArray[lastArrayCounter] = numbers[i];
            lastArrayOfCounters[lastArrayCounter] = counters[i];
            lastArrayCounter++;
        }
    }

    for (int i = 0; i < lastArrayCounter; i++)
    {
        printf(" Number : %d | Repeat : %d \n", lastArray[i], lastArrayOfCounters[i]);
    }
}