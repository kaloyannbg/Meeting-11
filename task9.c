/*
9. Напишете програма, която да завърти даден масив от цели
числа с N позиции наляво. Масива и числото N трябва да бъдат
въведени от клавиатурата. Принтирайте оригиналния и
резултатния масиви. Пример:
*/

#include <stdio.h>
#define ARR_LENGTH 10

void main()
{

    int array[ARR_LENGTH];;

    int arrayChange[ARR_LENGTH];

    int nLeft = 0;

    int counter = 0;

    for(int i = 0; i < ARR_LENGTH; i++) {
        printf(" Enter number %d: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("  -- Please enter left position to reverse : ");

    scanf("%d", &nLeft);

    for (int i = nLeft; i < ARR_LENGTH; i++)
    {
        arrayChange[counter] = array[i];

        counter++;
    }

    for (int i = 0; i < nLeft; i++)
    {
        arrayChange[counter] = array[i];
        counter++;
    }

    // print result
    putchar('\n');
    for (int i = 0; i < ARR_LENGTH; i++)
    {
        printf("[ %d ]", arrayChange[i]);
    }
    putchar('\n');
}