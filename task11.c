/*
11. Напишете програма, която да обедини два масива от цели числа, като ги сортира в низходящ
ред и ги принтира.
*/

#include <stdio.h>

void main() {

    int arrayOne[5] = { 1, 0, 3, 2, 5};

    int arrayTwo[5] = { 111, 7, 8, 11, 10 };

    int arrayTotal[10];

    int counter = 0;

    //I CAN USE STRCAT  FROM LIBRARY <string.h> TOO BUT I DONT WANT :)

    for(int i = 0; i < 5; i++) {
        arrayTotal[counter++] = arrayOne[i];
    }

    for(int i = 0; i < 5; i++) {
        arrayTotal[counter++] = arrayTwo[i];
    }

    int temp = 0;

    for(int i = 0; i < counter; i++) {

        for(int j = 0; j < counter; j++) {
            if(arrayTotal[i] > arrayTotal[j] ) {
                temp = arrayTotal[i];
                arrayTotal[i] = arrayTotal[j];
                arrayTotal[j] = temp;
            }
        }

    }

    for(int i = 0; i < counter; i++) {
        printf("  %d  \n", arrayTotal[i]);
    }

}