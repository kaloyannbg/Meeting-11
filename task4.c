#include <stdio.h>

int main() {

    int array[10];

    for(int i = 0; i < 10; i++) {
        printf("  Enter number %d: ", i+1);
        scanf("%d", &array[i]);
    }

    for(int i = 9; i >= 0; i--) {
        printf(" %d. %d \n", i+1, array[i]);
    }


    return 0;
}