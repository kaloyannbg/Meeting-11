#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int intArr[20];

    int number = 0;

    srand(time(0));

    int iChoice = 0;

    do
    {
        printf("\n  Enter 1 for see more random numbers \n");

        scanf("%d", &iChoice);
        if (iChoice == 1)
        {
            for (int i = 0; i < 10; i++)
            {
                intArr[i] = rand() % 10;
            }

            printf("  Enter your number: ");

            scanf("%d", &number);

            for (int i = 0; i < 10; i++)
            {
                if (intArr[i] == number)
                {
                    printf("WOOOOOOOOOOHO IMPOSSIBLE!");
                    printf("You find random:%d\n\n", intArr[i]);
                    continue;
                }

                printf("%d\n ", intArr[i]);
            }
        }
    } while (iChoice != 0);

    return 0;
}