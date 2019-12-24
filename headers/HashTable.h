#ifndef HASHTABLE_H_INCLUDED
#define HASHTABLE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

typedef struct _define_HashCell {
    uint64_t key;
    int flag;   // used to count how many hash cells are after it
    struct _define_HashCell* nextCell;
} HashCell;

typedef struct _define_HashTable {
    HashCell* hashList;
} HashTable;


/**
 * A collection of test in this header file.
 */
void _HashTableTestSet();


/*
 * Working functions.
 */


/**
 * Search a string in hash table and get the first hash cell of the hash index of the string.
 *
 * @param str string to be searched in hash table
 * @param hashTable hash table
 * @param tableSize size of the hash table
 * @return first hash cell of the hash index of the input string
 */
HashCell* searchHashCell(char* str, HashTable* hashTable, uint64_t tableSize);

/**
 * Check performance of the hash table.
 *
 * @param hashTable hash table
 * @param tableSize size of the table
 */
void checkHashTablePerformance(HashTable* hashTable, uint64_t tableSize);

/**
 * Display the hash table.
 *
 * @param hashTable hash table
 * @param tableSize size of the table
 */
void displayHashTable(HashTable* hashTable, uint64_t tableSize);

/**
 * Add a hash string with specific key as a hash cell into hash table.
 *
 * @param str string used for calculating hash index
 * @param key key of the string
 * @param hashTable hash table
 * @param tableSize size of the hash table
 */
void addHashCell(char* str, uint64_t key, HashTable* hashTable, uint64_t tableSize);

/**
 * Initialize a hash table of specific size.
 *
 * @param tableSize size of the hash table
 * @param hashTable hash table
 */
void initHashTable(uint64_t tableSize, HashTable* hashTable);

/**
 * Calculating the hash table index of a string.
 *
 * @param str input string
 * @param tableSize size of the hash table
 * @return hash table index
 */
uint64_t hashIndex(char *str, uint64_t tableSize);

#endif // HASHTABLE_H_INCLUDED
