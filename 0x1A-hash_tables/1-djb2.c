#include "hash_tables.h"

/**
 * hash_djb2 - takes a string and turns it into a hash number
 * @str: a constant value unrepeated in the hash table
 *
 * Return: hash number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int _hash;
	int c;

	_hash = 5381;
	while ((c = *str++))
	{
		_hash = ((_hash << 5) + _hash) + c; /* hash * 33 + c */
	}
	return (_hash);
}
