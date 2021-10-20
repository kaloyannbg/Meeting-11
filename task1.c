#include <stdio.h>

int main() {

    int intArray[5];

    int intArrayCopied[10];

    int intArraySize = sizeof(intArray)/sizeof(int);

    for(int i = 0; i < intArraySize; i++) {
        printf("  Enter number %d: ", i+1);
        scanf("%d", &intArray[i]);
        intArrayCopied[i] = intArray[i] * 2;
    }
    putchar('\n');
    for(int i = 0; i < intArraySize; i++) {
        printf("    %d | %d", intArray[i], intArrayCopied[i]);
        putchar('\n');
    }


    return 0;
}