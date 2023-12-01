#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ----- Structures ----- */

/**
 * struct hash_node_s - Node structure for a hash table
 * @key: The unique string key for the hash table
 * @value: The corresponding value associated with the key
 * @next: Pointer to the next node in the linked list
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Structure for a hash table
 * @size: The size of the array
 * @array: An array of size @size containing pointers to linked lists
 */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

/* ----- Function Prototypes for Hash Table Operations ----- */

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/**
 * struct shash_node_s - Node structure for a sorted hash table
 * @key: The unique string key for the sorted hash table
 * @value: The corresponding value associated with the key
 * @next: Pointer to the next node in the linked list
 * @sprev: Pointer to the previous node in the sorted linked list
 * @snext: Pointer to the next node in the sorted linked list
 */
typedef struct shash_node_s
{
    char *key;
    char *value;
    struct shash_node_s *next;
    struct shash_node_s *sprev;
    struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Structure for a sorted hash table
 * @size: The size of the array
 * @array: An array of size @size containing pointers to linked lists
 * @shead: Pointer to the first node in the sorted linked list
 * @stail: Pointer to the last node in the sorted linked list
 */
typedef struct shash_table_s
{
    unsigned long int size;
    shash_node_t **array;
    shash_node_t *shead;
    shash_node_t *stail;
} shash_table_t;

/* ----- Function Prototypes for Sorted Hash Table Operations ----- */

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif /* HASH_TABLES_H */
