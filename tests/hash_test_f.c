/*
** EPITECH PROJECT, 2024
** hash_test_f.c
** File description:
** hash_test_f.c
*/

int hash(char *key, int len)
{
	unsigned int hash = 0;
	int c;

	while (c = *key++)
	    hash += c;

	return hash;
}
