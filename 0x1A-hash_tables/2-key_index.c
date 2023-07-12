#include "hash_tables.h"

/**
 * key_index - Get the index at key/value
 * @key: The key
 * @size: The size of the array
 * Return: idx of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
