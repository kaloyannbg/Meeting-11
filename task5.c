#include <stdio.h>

int main()
{

    int intArray[10];

    int isUnique = 1;

    for (int i = 0; i < 10; i++)
    {
        printf("  Enter number %d: ", i + 1);
        scanf("%d", &intArray[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        isUnique = 1;

        for (int j = 0; j < 10; j++)
        {

            if (intArray[i] == intArray[j] && i != j)
            {
                isUnique = 0;
            }
        }

        if (isUnique == 1)
        {
            printf("%d \n", intArray[i]);
        }
    }

    return 0;
}