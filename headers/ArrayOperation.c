#include "ArrayOperation.h"

/**
 * A collection of test in this header file.
 */
void _ArrayOperationTestSet(){
    _clearCharArrayTest();
}



/*
 * Tests for working functions.
 */

/**
 * Test function clearCharArray.
 */
void _clearCharArrayTest(){
    printf("\n**************** _clearCharArrayTest ****************\n");
    int i = 0;
    char charArray[4] = {'a', 'c', 'g', 't'};

    printf("charArray: ");
    for(i = 0; i < 4; i++){
        printf("%c.", charArray[i]);
    }
    printf(".\n");

    printf("... clear charArray\n");
    clearCharArray(charArray, 4);

    printf("charArray: ");
    for(i = 0; i < 4; i++){
        printf("%c.", charArray[i]);
    }
    printf(".\n");

}



/*
 * Working functions.
 */

/**
 * Clear char array to empty.
 *
 * @param charArray char array
 * @param arrayLength length of array
 */
void clearCharArray(char charArray[], int arrayLength){
    int i = 0;
    for(i = 0; i < arrayLength; i++){
        charArray[i] = ' ';
    }
}