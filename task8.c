#include <stdio.h>

int main()
{

    int array[6];

    int arrayEven[6];

    int arrayOdd[6];

    int evenCounter = 0;

    int oddCounter = 0;

    for (int i = 0; i < 6; i++)
    {
        printf(" enter number: ");
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < 6; i++) {

        if(array[i] % 2 == 0 ) {
            //even
            arrayEven[evenCounter++] = array[i];
        } else if(array[i] % 2 == 1) {
            //odd
            arrayOdd[oddCounter++] = array[i];
        }
    }

    for(int i = 0; i < evenCounter; i++) {
        printf("Even Array: %d \n", arrayEven[i]);
    }

    for(int i = 0; i < oddCounter; i++) {
        printf("Odd Array: %d \n", arrayOdd[i]);
    }

    return 0;
}