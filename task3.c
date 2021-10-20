#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int intArr[20];

    int number = 0;

    int largest = 0;

    srand(time(0));

    for (int i = 0; i < 20; i++)
    {
        intArr[i] = rand() % 100;
    }

    for (int i = 0; i < 20; i++)
    {

        if (intArr[i] > largest)
        {
            largest = intArr[i];
        }

        printf("%d , ", intArr[i]);
    }

    printf("\n The largest number is: %d", largest);

    return 0;
}
